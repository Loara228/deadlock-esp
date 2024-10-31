use egui::{pos2, Align2, Color32, FontId, Painter, Pos2, Rect, Rounding, Stroke, Ui};

use crate::{external::interfaces::{entities::Player, math::{Matrix, Vector3}}, settings::structs::HealthbarSettings};

pub fn draw(ui: &mut Ui, player: &Player, local_player: &Player, matrix: &Matrix, settings: &crate::settings::structs::Settings, ord: usize) {
    let icon_size = settings.offscreen.icon_size;
    let radius = settings.offscreen.radius;


    let screen_rect = ui.ctx().screen_rect();
    let screen_center = screen_rect.center();
    let mut screen_point = player.game_scene_node.position;
    screen_point.z += 50f32;

    let behind = !matrix.transform(&mut screen_point);
    
    let x: f32 = screen_center.x - screen_point.x;
    let y: f32 = screen_center.y - screen_point.y;
    let radius: f32 = radius + (ord as f32 * (icon_size * 1.5f32));
    if !behind && in_fov(screen_point, screen_center, radius) {
        return;
    }
    let mut dir = Vector3::mul(Vector3::normalize(Vector3 { x, y, z: 0f32 }), -1f32);
    if behind {
        dir = Vector3::mul(dir, -1f32);
    }
    let circle_pos = pos2((dir.x * radius) + screen_center.x, (dir.y * radius) + screen_center.y);

    let icon_rect = Rect {
        min: pos2(circle_pos.x - icon_size / 2f32, circle_pos.y - icon_size / 2f32),
        max: pos2((circle_pos.x - icon_size / 2f32) + icon_size, (circle_pos.y - icon_size / 2f32) + icon_size),
    };
    if settings.offscreen.enable_distance {
        draw_distance(ui.painter(), icon_rect, player, local_player);
    }
    draw_info(ui.painter(), player, icon_rect, &settings);

    if settings.offscreen.enable_icon {
        let image = egui::Image::new(player.data.hero.get_icon());
        if behind {
            image.tint(Color32::from_rgba_unmultiplied(200, 200, 200, 100)).paint_at(ui, icon_rect);
        }
        else {
            image.paint_at(ui, icon_rect);}
    }
}

fn draw_info(g: &Painter, player: &Player, icon_rect: Rect, settings: &crate::settings::structs::Settings) {
    if settings.offscreen.enable_rect {
        g.rect_stroke(icon_rect, Rounding::default(), Stroke::new(2f32, settings.offscreen.rect_color));}
    if settings.offscreen.enable_health {
        draw_healthbar(g, player, icon_rect, &settings.healthbars);
    }
}

fn draw_healthbar(g: &Painter, player: &Player, icon_rect: Rect, settings: &HealthbarSettings) {
    let rect_hp_max = Rect {
        min: pos2(icon_rect.min.x, icon_rect.max.y + 2f32),
        max: pos2(icon_rect.max.x, icon_rect.max.y + 4f32),
    };

    let rounding = Rounding::default();

    let hp_rect = Rect {
        min: rect_hp_max.min,
        max: pos2(rect_hp_max.min.x +  rect_hp_max.width() / player.pawn.max_health as f32 * player.pawn.health as f32, rect_hp_max.max.y),
    };
    
    g.rect_filled(rect_hp_max, rounding, settings.background_color); // background
    g.rect_filled(hp_rect, rounding, settings.hp_color); // hp
    g.rect_stroke(rect_hp_max, rounding, Stroke::new(1f32, settings.outline_color)); // stroke
}


fn draw_distance(g: &Painter, icon_rect: Rect, player: &Player, local_player: &Player) {
    let mut font = FontId::default();
    font.size = 12f32;
    let distance_m = (Vector3::distance(player.game_scene_node.position, local_player.game_scene_node.position) * 0.0254).round();
    let mut text = distance_m.to_string();
    text.push_str(" m");
    g.text(
        Pos2 {
            x: icon_rect.center().x + 2f32,
            y: icon_rect.bottom() + 6f32 + 2f32,
        },
        Align2::CENTER_TOP,
        text.clone(),
        font.clone(),
        egui::Color32::BLACK,
    );
    g.text(
        Pos2 {
            x: icon_rect.center().x,
            y: icon_rect.bottom() + 6f32,
        },
        Align2::CENTER_TOP,
        text,
        font,
        egui::Color32::WHITE,
    );
}

fn in_fov(p: Vector3, center: Pos2, radius: f32) -> bool
{
    Vector3::distance(p, Vector3::from_pos2(center)) <= radius
}
