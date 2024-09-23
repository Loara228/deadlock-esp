use egui::{Align2, Color32};
use serde::{Deserialize, Serialize};

use crate::input::keyboard::Key;

#[derive(Debug)]
#[derive(PartialEq)]
#[derive(Serialize, Deserialize)]
pub enum BoxType
{
    Default,
    Rounded,
    Edges

}

#[derive(Serialize, Deserialize)]
pub struct TextSettings {
    pub enable: bool,
    pub shadow: bool,
    pub align: Align2,
    pub font_size: f32,
    pub font_color: Color32,
}

#[derive(Serialize, Deserialize)]
pub struct GlobalSettings {
    pub key_overlay: Key,
}

#[derive(Serialize, Deserialize)]
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

#[derive(Serialize, Deserialize)]
#[derive(Default)]
pub struct Settings {
    pub global: GlobalSettings,
    pub esp_players: EspPlayers,
    pub radar: RadarSettings,
    pub aim_players: AimSettings
}

#[derive(Serialize, Deserialize)]
#[derive(Default)]
pub struct AimSettings
{
    pub enable: bool,
    pub angle_per_pixel: f32,
    pub fov: f32,
    pub smooth: f32,
    pub velocity_prediction: bool,
    pub vel_val: f32
}

#[derive(Serialize, Deserialize)]
pub struct EspPlayers {
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