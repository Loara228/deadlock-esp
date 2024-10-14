use crate::{external::{interfaces::enums::Hero, External}, input::keyboard::{Key, KeyState}, settings::structs::Settings};

pub mod hero_scripts;
pub mod scripts;

pub trait HeroScript {
    fn update(&mut self, game: &External, key_state: KeyState, settings: &mut Settings);
    fn draw(&self, g: &egui::Painter, game: &External);
    fn hero_id(&self) -> Hero;
    fn name(&self) -> &str;
    fn init_key_code(&self) -> Option<i32>;
}

pub struct HeroScriptSettings {
    pub enabled: bool,
    pub key: Option<Key>
}

impl Default for HeroScriptSettings {
    fn default() -> Self {
        Self {
            enabled: false,
            key: None
        }
    }
}