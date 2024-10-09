use crate::{external::interfaces::{entities::{Entity, Player}, math::{Matrix, Vector3}}, settings::structs::{AimProperties, AimSettings}};

pub fn draw(g: &egui::Painter, settings: &AimSettings, entities: &Vec<Entity>, matrix: &Matrix, local_player: &Player)
{
    if settings.creeps.enable {
        for ent in entities.iter() {
            if ent.continue_alive() || ent.check_creep(local_player)
            {
                continue;
            }
            if !ent.game_scene_node.dormant && Vector3::distance(local_player.game_scene_node.position, ent.game_scene_node.position) < settings.creeps.range
            {
                ent.draw(g, matrix, &settings);
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
    let stroke = egui::Stroke::new(2f32, properties.color);
    unsafe {
        if !DISPLAY_POS.is_zero() {
            g.line_segment([g.ctx().screen_rect().center(), DISPLAY_POS.to_pos2()], stroke);
        }
    }
    g.circle_stroke(g.ctx().screen_rect().center(), properties.fov, stroke);
}

pub static mut DISPLAY_POS: Vector3 = Vector3 { x: 0f32, y: 0f32, z: 0f32 };