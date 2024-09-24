use egui::{Color32, Pos2};

use crate::{external::interfaces::{entities::{Entity, Player}, enums::EntityType, math::{Matrix, Vector3}}, settings::structs::{AimProperties, AimSettings}};

pub fn draw(g: &egui::Painter, settings: &AimSettings, entities: &Vec<Entity>, matrix: &Matrix, local_player: &Player)
{
    if settings.creeps.enable {
        for ent in entities.iter() {
            if !ent.game_scene_node.dormant && Vector3::distance(local_player.game_scene_node.position, ent.game_scene_node.position) < settings.creeps.range
            {
                let enemy_team = if local_player.pawn.team == 2 {
                    263171
                } else {
                    263170
                };
                if ent.class == EntityType::Creep {
                    if ent.pawn.team == enemy_team
                    {
                        draw_creep(g, ent, matrix);
                    }
                }
                else {
                    draw_soul(g, ent, matrix);
                }
            }
        }
        draw_fov(g, &settings.creeps);
    }
    if settings.players.enable {
        draw_fov(g, &settings.players);
    }
}

pub fn draw_fov(g: &egui::Painter, properties:  &AimProperties)
{
    let stroke = egui::Stroke::new(1., Color32::RED);
    g.circle_stroke(g.ctx().screen_rect().center(), properties.fov, stroke);
}

pub fn draw_creep(g: &egui::Painter, ent: &Entity, matrix: &Matrix)
{
    let mut screen_pos = ent.game_scene_node.position;
    screen_pos.z += 45.;
    if matrix.transform(&mut screen_pos)
    {
        g.circle_filled(Pos2::new(screen_pos.x, screen_pos.y), 4., egui::Color32::BLUE);
    }
}
pub fn draw_soul(g: &egui::Painter, ent: &Entity, matrix: &Matrix)
{
    let mut screen_pos = ent.game_scene_node.position;
    if matrix.transform(&mut screen_pos)
    {
        g.circle_filled(Pos2::new(screen_pos.x, screen_pos.y), 4., egui::Color32::GREEN);
    }
}