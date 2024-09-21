pub mod structs;

use egui::Color32;
use structs::BoxType;
use crate::input::keyboard::Key;

#[derive(Default)]
pub struct Settings
{
    pub global: Global,
    pub esp_players: EspPlayers
}

pub struct EspPlayers
{
    /// Полная отрисовка ESP игрока. Если выключено, то просто не рисуем
    pub render: bool,

    pub outline_rect: bool,
    pub fill_rect: bool,
    pub glow: bool,

    pub outline_color: Color32,
    pub fill_color: Color32,
    pub glow_color: Color32,
    
    pub stroke_width: f32,
    pub glow_blur: f32,
    pub box_type: BoxType
}

pub struct Global 
{
    pub key_overlay: Key
}

impl Default for Global
{
    fn default() -> Self {
        Self {
            key_overlay: Key::new(0x24)
        }
    }
}

impl Default for EspPlayers
{
    fn default() -> Self {
        Self {
            stroke_width: 2f32,
            outline_color: Color32::from_rgba_unmultiplied(255, 0, 195, 200),
            fill_color: Color32::from_rgba_unmultiplied(0, 0, 0, 35),
            box_type: BoxType::Default,
            outline_rect: true,
            fill_rect: false,
            render: true,
            glow: false,
            glow_color: Color32::from_rgba_unmultiplied(255, 51, 220, 27),
            glow_blur: 80.,
        }
    }
}