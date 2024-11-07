use crate::{external::interfaces::entities::Player, settings::structs::HealthbarSettings};
use egui::{pos2, Pos2, Rounding, Stroke, Ui};
use emath::Rect;

pub fn draw(ui: &mut Ui, player: &Player, settings: &HealthbarSettings)
{
    let g: &egui::Painter = ui.painter();
    if !settings.enable
    {
        return;
    }
    let height: f32 = get_height(player.rect.width());
    let rounding = Rounding::same(height / 2f32);
    let hp_rect_max = get_hpbar_rect(player.rect, 1, 1);
    let hp_rect = get_hpbar_rect(player.rect, player.data.health, player.data.max_health);
    g.rect_filled(hp_rect_max, rounding, settings.background_color); // background
    g.rect_filled(hp_rect, rounding, settings.hp_color); // hp
    g.rect_stroke(hp_rect_max, rounding, Stroke::new(1f32, settings.outline_color)); // stroke

    let mut icon_size: f32 = height * 1.5f32;
    if icon_size < 20f32 {
        icon_size = 20f32;
    }
    let icon_pos = pos2(hp_rect.min.x - icon_size, hp_rect.min.y + height / 2f32 - icon_size / 2f32);

    let icon_rect = Rect::from_min_max(
        icon_pos, 
        pos2(icon_pos.x + icon_size, icon_pos.y + icon_size));
    
    egui::Image::new(player.data.hero.get_icon()).paint_at(ui, icon_rect);
}

fn get_hpbar_rect(player_rect: Rect, hp: i32, hp_max: i32) -> Rect
{
    Rect {
        min: Pos2 { x: player_rect.min.x, y: player_rect.max.y + OFFSET },
        max: Pos2 { x: player_rect.min.x + player_rect.width() / hp_max as f32 * hp as f32, y: player_rect.max.y + OFFSET + get_height(player_rect.width()) },
    }
}

pub fn get_height(rect_width: f32) -> f32 {
    let height: f32 = rect_width / 10f32;
    if height > 12f32 {
        return 12f32
    }
    else if height < 4f32 {
        return 4f32;
    }
    return height;
}

// const HEIGHT: f32 = 5f32;
const OFFSET: f32 = 4f32;
// const ICON_SIZE: f32 = 20f32;