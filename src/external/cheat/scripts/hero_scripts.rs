use egui::{Align2, Color32, FontId};

use crate::{external::{interfaces::enums::Hero, offsets::client_dll::CCitadel_Ability_Shiv_KillingBlow, External}, memory::read_memory};

pub trait HeroScript {
    fn update(&self, game: &External);
    fn draw(&self, g: &egui::Painter, game: &External);
    fn hero_id(&self) -> Hero;
}

#[derive(Default)]
pub struct Shiv { }

impl HeroScript for Shiv {
    fn update(&self, game: &External) {
    }

    fn draw(&self, g: &egui::Painter, game: &External) {
        let local_player = game.get_local_player();
        let ult_ability = local_player.abilities.list.get(3);
        if ult_ability.is_none() {
            return;
        }
        let ult_ability = ult_ability.unwrap();
        let upgrade = ult_ability.points; // ульт (топор)
        let mut font = FontId::default();
        font.size = 32f32;
        for player in game.players.iter() {
            if player.is_alive() && player.pawn.team != local_player.pawn.team {
                let health_perc = 100f32 / player.pawn.max_health as f32 * player.pawn.health as f32;
                let can_kill: bool = if upgrade < 7 {
                    health_perc < 19.5f32 // 20%
                }
                else {
                    health_perc < 27.5f32 // 28%
                };
                if player.pawn.health <= 190 || can_kill {
                    g.text(player.rect.center(), Align2::CENTER_CENTER, "💀", font.clone(), Color32::RED);
                }
            }
        }
    }

    fn hero_id(&self) -> Hero {
        Hero::Shiv
    }
}