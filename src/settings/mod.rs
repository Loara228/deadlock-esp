pub mod structs;

use egui::{Align2, Color32};
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
    pub box_type: BoxType,

    pub text_hero: TextSettings,
    pub text_health: TextSettings
}

impl Default for EspPlayers
{
    fn default() -> Self {
        Self {
            stroke_width: 2f32,
            outline_color: Color32::from_rgba_unmultiplied(255, 0, 195, 200),
            fill_color: Color32::from_rgba_unmultiplied(0, 0, 0, 35),
            box_type: BoxType::Edges,
            outline_rect: true,
            fill_rect: false,
            render: true,
            glow: false,
            glow_color: Color32::from_rgba_unmultiplied(255, 51, 220, 27),
            glow_blur: 80.,
            text_hero: Default::default(),
            text_health: Default::default()
        }
    }
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

pub struct TextSettings
{
    pub enable: bool,
    pub shadow: bool,
    pub align: Align2,
    pub font_size: f32,
    pub font_color: Color32
}

impl Default for TextSettings
{
    fn default() -> Self {
        Self
        {
            enable: true,
            shadow: true,
            align: Align2::CENTER_BOTTOM,
            font_size: 14.,
            font_color: Color32::WHITE,
        }
    }
}