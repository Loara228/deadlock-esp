use egui::{Align2, Color32, FontId};
use egui_notify::Toasts;
use crate::{external::{cheat::aim::{self, aiming}, interfaces::{entities::Player, enums::{AbilitySlot, Hero}, math::Vector3}, External}, input::keyboard::{self, KeyState, VirtualKeys}, settings::structs::Settings};
use super::HeroScript;

#[derive(Default)]
pub struct Shiv {}

impl Shiv {
    fn can_kill(&self, local_player: &Player, player: &Player, upgrade: i32) -> bool {
        if player.is_alive() && player.pawn.team != local_player.pawn.team {
            let health_perc = 100f32 / player.pawn.max_health as f32 * player.pawn.health as f32;
            let can_kill: bool = if upgrade < 7 {
                health_perc < 19.9f32 // 20%
            }
            else {
                health_perc < 27.9f32 // 28%
            };
            if player.pawn.health <= 195 || can_kill {
                return true;
            }
        }
        return false;
    }
}

impl HeroScript for Shiv {
    fn update(&mut self, game: &External, _: KeyState, settings: &mut Settings) {
        if settings.aim.players.enable {
            unsafe {
                if aiming::player_index.is_some() {
                    let local_player = game.get_local_player();
                    let ult_ability = local_player.abilities.get(AbilitySlot::ESlot_Signature_4);
                    if ult_ability.is_none() {
                        return;
                    }
                    let ult_ability = ult_ability.unwrap();
                    if ult_ability.coodown {
                        return;
                    }
                    let upgrade = ult_ability.points;
                    let player = game.get_player_by_index(aiming::player_index.unwrap());
                    let screen_center = game.screen.center();
                    if Vector3::distance(aim::drawing::DISPLAY_POS, Vector3 { x: screen_center.x, y: screen_center.y, z: 0f32 }) < 355f32 {
                        if (Vector3::distance(player.game_scene_node.position, local_player.game_scene_node.position) * 0.0254 < 20f32) && self.can_kill(local_player, player, upgrade) {
                            keyboard::send_key(VirtualKeys::KEY_4);
                        }
                    }
                }
            }
        }
    }

    fn draw(&mut self, g: &egui::Painter, game: &External, _: &mut Toasts) {
        let local_player = game.get_local_player();
        let ult_ability = local_player.abilities.get(AbilitySlot::ESlot_Signature_4);
        if ult_ability.is_none() {
            return;
        }
        let ult_ability = ult_ability.unwrap();
        if ult_ability.coodown {
            return;
        }
        let upgrade = ult_ability.points;
        let mut font = FontId::default();
        font.size = 32f32;
        for player in game.players.iter() {
            if player.rect.max.x == 0f32 {
                continue;
            }
            if self.can_kill(local_player, player, upgrade) {
                g.text(player.rect.center(), Align2::CENTER_CENTER, "💀", font.clone(), Color32::RED);
            }
        }
    }

    fn hero_id(&self) -> Hero {
        Hero::Shiv
    }
    
    fn name(&self) -> &str {
        "Description on github"
    }

    fn init_key_code(&self) -> Option<i32> {
        None
    }
}

//CCitadel_Projectile_Bebop_Hook ? 