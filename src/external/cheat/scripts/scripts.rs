use std::time::Instant;

use egui_notify::Toasts;
use crate::{external::{interfaces::{entities::Player, enums::{AbilitySlot, Hero}, structs::Ability}, offsets::client_dll::{CCitadel_Ability_PrimaryWeapon, CCitadel_Ability_Slide}}, input::keyboard::{self, KeyState, VirtualKeys}, memory::read_memory, settings::structs::Priority};
use super::HeroScript;

pub struct EntityPriorityToggle {
    pub toggle: bool,
    pub priority: Priority
}

impl Default for EntityPriorityToggle {
    fn default() -> Self {
        Self {
            toggle: false,
            priority: Priority::Creeps
        }
    }
}

impl HeroScript for EntityPriorityToggle {
    fn update(&mut self, _: &crate::external::External, key_state: KeyState, settings: &mut crate::settings::structs::Settings) {
        if key_state == KeyState::Pressed {
            match settings.aim.priority {
                Priority::Creeps => {
                    settings.aim.priority = Priority::Souls;
                    self.priority = Priority::Souls;
                },
                Priority::Souls => {
                    settings.aim.priority = Priority::Creeps;
                    self.priority = Priority::Creeps;
                },
            }
            self.toggle = true;
        }
    }

    fn draw(&mut self, _: &egui::Painter, _: &crate::external::External, toasts: &mut Toasts) {
        if self.toggle {
            toasts.info(format!("Priority: {:?}", self.priority));
            self.toggle = false;
        }
    }

    fn hero_id(&self) -> Hero {
        Hero::None
    }

    fn name(&self) -> &str {
        "A bind to change the aim priority"
    }

    fn init_key_code(&self) -> Option<i32> {
        Some(VirtualKeys::F5 as i32)
    }
}


pub struct AutoReload { 
    reloaded: bool
}

impl Default for AutoReload {
    fn default() -> Self {
        Self {
            reloaded: false
        }
    }
}

impl HeroScript for AutoReload {
    fn update(&mut self, game: &crate::external::External, _: KeyState, _: &mut crate::settings::structs::Settings) {
        let local_player = game.get_local_player();
        let ult_ability = local_player.abilities.get(AbilitySlot::ESlot_Weapon_Primary);
        if ult_ability.is_none() {
            return;
        }
        let ult_ability = ult_ability.unwrap();
        unsafe {
            let in_reload: bool = read_memory(ult_ability.ptr.add(CCitadel_Ability_PrimaryWeapon::m_bInReload));
            if in_reload && self.reloaded == false {
                let can_active_reload: bool = read_memory(ult_ability.ptr.add(CCitadel_Ability_PrimaryWeapon::m_bCanActiveReload));
                if can_active_reload {
                    let cur_time = game.global_vars.current_time;
                    let reload_start: f32 = read_memory(ult_ability.ptr.add(CCitadel_Ability_PrimaryWeapon::m_flNextAttackDelayStartTime));
                    let reload_end: f32 = read_memory(ult_ability.ptr.add(CCitadel_Ability_PrimaryWeapon::m_flNextAttackDelayEndTime));
                    let reload_pause: f32 = read_memory(ult_ability.ptr.add(CCitadel_Ability_PrimaryWeapon::m_flAttackDelayPauseTotalTime));
                    let reload_time = (reload_end - reload_start) / 2f32;
                    // Это немного костыльный способ. Значения подбирал сам на глаз.
                    if cur_time - game.game_rules.paused_time > reload_start + (reload_time - 0.15f32) + (reload_pause / 2f32) {
                        self.reloaded = true;
                        keyboard::send_key_thread(VirtualKeys::KEY_R);
                    }
                }
            } else {
                self.reloaded = false;
            }
        }
    }

    fn draw(&mut self, _g: &egui::Painter, _game: &crate::external::External, toasts: &mut Toasts) {
        if self.reloaded {
            toasts.info("Reloaded");
            self.reloaded = false;
        }
    }

    fn hero_id(&self) -> Hero {
        Hero::None
    }

    fn name(&self) -> &str {
        "Active reload (item)"
    }

    fn init_key_code(&self) -> Option<i32> {
        None
    }
}

#[derive(Default)]
pub struct RadarToggle {}
impl HeroScript for RadarToggle {
    fn update(&mut self, _: &crate::external::External, key_state: KeyState, settings: &mut crate::settings::structs::Settings) {
        if key_state == KeyState::Pressed {
            settings.radar.icons = true;
        } else if key_state == KeyState::Released {
            settings.radar.icons = false;
        }
    }

    fn draw(&mut self, _: &egui::Painter, _: &crate::external::External, _: &mut Toasts) {
        
    }

    fn hero_id(&self) -> Hero {
        Hero::None
    }

    fn name(&self) -> &str {
        "Радар на [ALT] как в доте"
    }

    fn init_key_code(&self) -> Option<i32> {
        Some(VirtualKeys::MENU as i32)
    }
}

pub struct MovementScript {
    timer: Instant,
    jmp: bool,
    dash: bool
}

impl Default for MovementScript {
    fn default() -> Self {
        Self {
            timer: Instant::now(),
            jmp: false,
            dash: false,
        }
    }
}

impl MovementScript {
    unsafe fn update_slide(&mut self, local_player: &Player, ability_slide: &Ability) {
        let sliding: bool = read_memory(ability_slide.ptr.add(CCitadel_Ability_Slide::m_bIsSliding));
        if sliding {
            let vel = (f32::abs(local_player.pawn.velocity.x).powf(2f32) + f32::abs(local_player.pawn.velocity.y).powf(2f32) + f32::abs(local_player.pawn.velocity.z).powf(2f32)).sqrt();
            if vel > 610f32 && self.timer.elapsed().as_millis() > 1500 {
                self.timer = Instant::now();
                self.jmp = true;
                keyboard::send_key_thread(VirtualKeys::SPACE);
            }
        }
    }
}

impl HeroScript for MovementScript {
    fn update(&mut self, game: &crate::external::External, key_state: KeyState, _settings: &mut crate::settings::structs::Settings) {
        let local_player = game.get_local_player();
        let ability_slide = local_player.abilities.get(AbilitySlot::ESlot_Ability_Slide);
        if ability_slide.is_none() {
            return;
        }
        unsafe {
            self.update_slide(local_player, ability_slide.unwrap());
        }
        if key_state == KeyState::Pressed {
            self.dash = true;
            std::thread::spawn(|| {
                keyboard::send_key(VirtualKeys::SHIFT);
                std::thread::sleep(std::time::Duration::from_millis(350));
                keyboard::send_key(VirtualKeys::SPACE);
            });
        }
    }

    fn draw(&mut self, _g: &egui::Painter, _game: &crate::external::External, toasts: &mut Toasts) {
        if self.jmp {
            self.jmp = false;
            toasts.info("Bhop");
        } else if self.dash {
            self.dash = false;
            toasts.info("Dash");
        }
    }

    fn hero_id(&self) -> Hero {
        Hero::None
    }

    fn name(&self) -> &str {
        "Movement scripts"
    }

    fn init_key_code(&self) -> Option<i32> {
        Some(VirtualKeys::KEY_G as i32)
    }
}