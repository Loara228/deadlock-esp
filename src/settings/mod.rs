pub mod structs;

use crate::input::keyboard::Key;
use egui::{Align2, Color32, Pos2};
use structs::BoxType;

#[derive(Default)]
pub struct Settings {
    pub global: GlobalSettings,
    pub esp_players: EspPlayers,
    pub radar: RadarSettings,
}

pub struct EspPlayers {
    /// Полная отрисовка ESP игрока. Если выключено, то просто не рисуем
    pub render: bool,

    pub outline_rect: bool,
    pub fill_rect: bool,
    pub glow: bool,
    pub shadow: bool,

    pub outline_color: Color32,
    pub fill_color: Color32,
    pub glow_color: Color32,
    pub shadow_color: Color32,

    pub stroke_width: f32,
    pub shadow_size: f32,
    pub shadow_blur: f32,
    pub box_type: BoxType,

    pub text_hero: TextSettings,
    pub text_health: TextSettings,
}

impl Default for EspPlayers {
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
            text_hero: Default::default(),
            text_health: Default::default(),
            shadow: false,
            shadow_color: Color32::from_rgba_unmultiplied(0, 0, 0, 30),
            shadow_size: 6.,
            shadow_blur: 40.
        }
    }
}

pub struct GlobalSettings {
    pub key_overlay: Key,
}

impl Default for GlobalSettings {
    fn default() -> Self {
        Self {
            key_overlay: Key::new(0x24),
        }
    }
}

pub struct TextSettings {
    pub enable: bool,
    pub shadow: bool,
    pub align: Align2,
    pub font_size: f32,
    pub font_color: Color32,
}

impl Default for TextSettings {
    fn default() -> Self {
        Self {
            enable: true,
            shadow: true,
            align: Align2::CENTER_BOTTOM,
            font_size: 14.,
            font_color: Color32::from_rgba_unmultiplied(180, 180, 180, 255),
        }
    }
}

pub struct RadarSettings {
    pub enable: bool,
    pub(crate) rect: egui::Rect,
    pub color_background: Color32,
    pub color_border: Color32,
    pub player_radius: f32,
    pub scale: f32,
    pub color_enemy: Color32,
    pub color_team: Color32,
}

impl Default for RadarSettings {
    fn default() -> Self {
        Self {
            enable: false,
            rect: egui::Rect {
                min: Pos2 { x: 0., y: 200. },
                max: Pos2 { x: 0., y: 200. },
            },
            color_background: Color32::from_rgba_unmultiplied(27, 27, 27, 200),
            color_border: Color32::from_rgba_unmultiplied(140, 140, 140, 255),
            player_radius: 3.,
            color_enemy: Color32::from_rgba_unmultiplied(234, 103, 109, 255),
            color_team: Color32::from_rgba_unmultiplied(75, 192, 117, 180),
            scale: 30.
        }
    }
}
