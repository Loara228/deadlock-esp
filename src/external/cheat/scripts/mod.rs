use std::sync::{Arc, Mutex};
use egui_notify::Toasts;
use hero_scripts::*;
use scripts::*;
use crate::{external::{interfaces::enums::Hero, External}, input::keyboard::{Key, KeyState}, settings::structs::Settings};


pub mod hero_scripts;
pub mod scripts;

pub fn get_scripts() -> Vec<(Arc<Mutex<dyn HeroScript>>, HeroScriptSettings)> {
    vec![
        (Arc::new(Mutex::new(AutoReload::default())), HeroScriptSettings::default()),
        (Arc::new(Mutex::new(EntityPriorityToggle::default())), HeroScriptSettings::default()),
        (Arc::new(Mutex::new(RadarToggle::default())), HeroScriptSettings::default()),
        (Arc::new(Mutex::new(MovementScript::default())), HeroScriptSettings::default()),

        // для героев
        (Arc::new(Mutex::new(Shiv::default())), HeroScriptSettings::default()),
        (Arc::new(Mutex::new(VindictaUlt::default())), HeroScriptSettings::default()),
    ]
}

pub trait HeroScript {
    fn update(&mut self, game: &External, key_state: KeyState, settings: &mut Settings);
    fn draw(&mut self, g: &egui::Painter, game: &External, toasts: &mut Toasts);
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