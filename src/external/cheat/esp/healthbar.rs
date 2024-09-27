use crate::{external::interfaces::entities::Player, settings::structs::HealthbarSettings};
use egui::{Color32, Pos2, Rounding, Stroke};
use emath::Rect;

pub fn draw(g: &egui::Painter, player: &Player, settings: &HealthbarSettings)
{
    if !settings.enable
    {
        return;
    }
    let rounding = Rounding::same(HEIGHT / 2f32);
    let hp_rect_max = get_hpbar_rect(player.rect, 1, 1);
    let hp_rect = get_hpbar_rect(player.rect, player.pawn.health, player.pawn.max_health);
    g.rect_filled(hp_rect_max, rounding, settings.background_color); // background
    g.rect_filled(hp_rect, rounding, settings.hp_color); // hp
    g.rect_stroke(hp_rect_max, rounding, Stroke::new(2f32, settings.outline_color)); // stroke
}

fn get_hpbar_rect(player_rect: Rect, hp: i32, hp_max: i32) -> Rect
{
    Rect {
        min: Pos2 { x: player_rect.min.x, y: player_rect.max.y + OFFSET },
        max: Pos2 { x: player_rect.min.x + player_rect.width() / hp_max as f32 * hp as f32, y: player_rect.max.y + OFFSET + HEIGHT },
    }
}

const HEIGHT: f32 = 8f32;
const OFFSET: f32 = 4f32;