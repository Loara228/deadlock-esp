use crate::external::interfaces::entities::Player;

pub fn draw(g: &egui::Painter, player: &Player)
{
    if true {
        return;
    }
    let ult = player.abilities.list.last();
    if ult.is_none() {
        return;
    }
    let ult = ult.unwrap();

    let x = player.rect.min.x + player.rect.width() / 2f32 - ABIL_RECT_SIZE / 2f32;
    let y = player.rect.min.y - ABIL_RECT_SIZE - ABIL_MARGIN;
    let color = match ult.coodown {
        true => egui::Color32::RED,
        false => egui::Color32::GREEN,
    };
    g.rect_filled(egui::Rect { min: egui::Pos2 { x, y }, max: egui::Pos2 { x: x + ABIL_RECT_SIZE, y: y + ABIL_RECT_SIZE } }, egui::Rounding::default(), color);
}

const ABIL_RECT_SIZE: f32 = 20f32;
const ABIL_MARGIN: f32 = 4f32;