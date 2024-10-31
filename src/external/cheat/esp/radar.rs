use crate::{
    external::{interfaces::entities::Player, External}, settings::structs::RadarSettings,
};
use egui::{epaint::PathShape, pos2, Pos2, Rect, Rounding, Stroke};

pub fn draw_radar_window(settings: &mut RadarSettings, ctx: &egui::Context)
{    let window = egui::Window::new("Radar");
      window
          .resizable(true)
          .min_size(egui::Vec2 { x: 100., y: 100. })
          .vscroll(true)
          .hscroll(true)
          .max_size(egui::Vec2 { x: 500., y: 500. })
          .title_bar(true)
          .default_size(settings.rect.size())
          .default_open(false)
          .show(ctx, |ui| {
            settings.rect = ui.available_rect_before_wrap();
    });
}

pub fn draw_radar(ui: &mut egui::Ui, settings: &RadarSettings, game: &External) {
    if game.local_player_index == 0 || !settings.enable {
        return;
    }
    let mut rounding = egui::Rounding::same(8.);
    rounding.nw = 0.;
    rounding.ne = 0.;
    let stroke = egui::Stroke::new(2., settings.color_border);
    ui.painter().rect_filled(settings.rect, rounding, settings.color_background);

    ui.painter().line_segment([settings.rect.center(), settings.rect.left_top()], stroke);
    ui.painter().line_segment([settings.rect.center(), settings.rect.right_top()], stroke);
    ui.painter().rect_stroke(settings.rect, rounding, stroke);

    for player in game.players.iter() {
        if player.is_alive() {
            let local_player: &Player = &game.players[game.local_player_index - 1];
            if local_player.index != player.index {
                draw_player(
                    ui,
                    player,
                    local_player,
                    settings,
                    game.camera.view_angles.y - 90.,
                );
            }
        }
    }
}

fn draw_player(
    ui: &mut egui::Ui,
    player: &Player,
    local_player: &Player,
    settings: &RadarSettings,
    angle: f32,
) {
    let center = settings.rect.center();
    let enemy = player.pawn.team != local_player.pawn.team;
    let mut pos = Pos2::new(
        local_player.game_scene_node.position.x - player.game_scene_node.position.x,
        local_player.game_scene_node.position.y - player.game_scene_node.position.y,
    );
    pos.x /= settings.scale;
    pos.y /= settings.scale;
    pos.x *= -1.;
    pos.x += center.x;
    pos.y += center.y;

    let radar_pos = transform(pos, center, settings.rect, angle);
    let color = match enemy {
        true => settings.color_enemy,
        false => settings.color_team,
    };

    if settings.icons {
        let num: f32 = settings.icon_size / 2f32;
        let icon_rect = Rect {
            min: pos2(radar_pos.x - num, radar_pos.y - num),
            max: pos2(radar_pos.x + num, radar_pos.y + num),
        };
        
        ui.painter().circle_filled(radar_pos, num + 1f32, color);
        let image = egui::Image::new(player.data.hero.get_icon());
        image.rounding(Rounding::same(num)).paint_at(ui, icon_rect);
    } else {
        let player_view_angle = ((player.game_scene_node.view_angle_y) * -1f32) + angle;
        draw_direction(ui.painter(), radar_pos.x, radar_pos.y, player_view_angle, settings.player_radius * 3f32, color);
        ui.painter().circle_filled(radar_pos, settings.player_radius, color);
    }
}

fn transform(point_to_rotate: Pos2, center: Pos2, radar_rect: Rect, angle: f32) -> Pos2 {
    let mut rotated_point = Pos2::default();
    let angle = angle * (3.1415926 / 180.);
    let cos_theta = angle.cos();
    let sin_theta = angle.sin();

    rotated_point.x = (cos_theta * (point_to_rotate.x - center.x)
        - sin_theta * (point_to_rotate.y - center.y))
        + center.x;
    rotated_point.y = (sin_theta * (point_to_rotate.x - center.x)
        + cos_theta * (point_to_rotate.y - center.y))
        + center.y;

    if rotated_point.x > radar_rect.left() + radar_rect.width() {
        rotated_point.x = radar_rect.left() + radar_rect.width();
    }

    if rotated_point.y > radar_rect.top() + radar_rect.height() {
        rotated_point.y = radar_rect.top() + radar_rect.height();
    }

    if rotated_point.x < radar_rect.left() {
        rotated_point.x = radar_rect.left();
    }

    if rotated_point.y < radar_rect.top() {
        rotated_point.y = radar_rect.top();
    }
    rotated_point
}

fn draw_direction(g: &egui::Painter, x: f32, y: f32, angle: f32, radius: f32, color: egui::Color32) {
    let arrow = calc_angle(x, y, angle, radius);
    let arrow_l = calc_angle(x, y, angle - 45f32, radius / 3f32);
    let arrow_r = calc_angle(x, y, angle + 45f32, radius / 3f32);

    let triangle_points = vec![
        arrow,
        arrow_l,
        arrow_r
    ];
    g.add(PathShape::convex_polygon(triangle_points, color, Stroke::default()));
}

fn calc_angle(x: f32, y: f32, angle: f32, radius: f32) -> Pos2 {
    Pos2 {
        x: x + radius * angle.to_radians().cos(),
        y: y + radius * angle.to_radians().sin()
    }
}