#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

use std::{ffi::c_void, net::UdpSocket, thread, time::Duration};
use egui::Pos2;
use crate::{external::{interfaces::{entities::Player, enums::EntityType, math::{Plane3D, Vector3}, structs::Camera}, External}, input::{keyboard::KeyState, mouse}, settings::structs::{AimProperties, AimSettings}};

pub fn update(settings: &AimSettings, game: &External, socket: &UdpSocket)
{
    if settings.angle_per_pixel == 0f32 || (!settings.players.enable && !settings.creeps.enable)
    {
        return;
    }

    unsafe {
        update_targets(settings, game);
        match player_index {
            Some(index) => {
                let target = game.get_player_by_index(index);
                let mut target_pos = target.skeleton.target_bone_pos.clone();
                if settings.players.velocity_prediction
                {
                    target_pos = calc_velocity(target_pos, target.pawn.velocity, &settings.players);
                }
                aim_to(target_pos, settings.angle_per_pixel, game, &settings.players, socket);
            },
            None => {
                match entity_array_index {
                    Some(entity_index) => {
                        let entity = game.entities[entity_index];
                        let mut target_pos = entity.game_scene_node.position;
                        if settings.creeps.velocity_prediction
                        {
                            target_pos = calc_velocity(target_pos, entity.pawn.velocity, &settings.players);
                        }
                        if entity.class == EntityType::Creep
                        {
                            target_pos.z += 45f32;
                        }
                        aim_to(target_pos, settings.angle_per_pixel, game, &settings.creeps, socket);
                    },
                    _ => (),
                }
            },
        }
    }
}

unsafe fn update_targets(settings: &AimSettings, game: &External)
{
    if settings.players.enable
    {
        if settings.players.key.state == KeyState::Down || settings.players.key.state == KeyState::Pressed
        {
            if !settings.players.targeting
            {
                find_player(game, game.get_local_player(), &settings.players);
            }
            if player_index == None
            {
                find_player(game, game.get_local_player(), &settings.players);
                if player_index != None
                {
                    return;
                }
            }
        }
        else
        {
            player_index = None;
        }
    }
    if settings.creeps.enable
    {
        if player_index == None && settings.creeps.key.state == KeyState::Down || settings.creeps.key.state == KeyState::Pressed
        {
            if !settings.creeps.targeting
            {
                find_entity(game, game.get_local_player(), &settings.creeps);
            }
            if entity_array_index == None {
                find_entity(game, game.get_local_player(), &settings.creeps);
                if entity_array_index != None
                {
                    return;
                }
            }
        }
        else
        {
            entity_array_index = None;
        }
    }
}

fn find_player(game: &External, local_player: &Player, settings: &AimProperties)
{
    if !settings.targeting
    {
        unsafe { player_index = None };
    }
    let mut distance = 9999f32;
    let center = game.screen.center();
    for p in game.players.iter()
    {
        if p.pawn.team != game.get_local_player().pawn.team && p.is_alive()
        {
            let mut target_pos = p.skeleton.target_bone_pos.clone();
            if game.view_matrix.transform(&mut target_pos) && in_fov(target_pos, center, settings.fov)
            {
                let cur_distance = Vector3::distance_2d(target_pos, Vector3::from_pos2(center));
                if cur_distance < distance && Vector3::distance(p.game_scene_node.position, local_player.game_scene_node.position) < settings.range
                {
                    distance = cur_distance;
                    unsafe { player_index = Some(p.index as usize) };
                }
            }
        }
    }
}

fn find_entity(game: &External, local_player: &Player, settings: &AimProperties)
{
    if !settings.targeting
    {
        unsafe { entity_array_index = None };
    }
    let mut distance = 9999f32;
    let mut priority = 0;
    let center = game.screen.center();
    let mut i = 0;
    for ent in game.entities.iter()
    {
        if ent.continue_alive() || ent.check_creep(local_player) || ent.game_scene_node.dormant
        {
            i += 1;
            continue;
        }
        if ent.class.as_priority() >= priority
            {
                if ent.class.as_priority() > priority
                {
                    distance = 9999f32;
                }
                let mut head_pos = ent.game_scene_node.position.clone();
                if ent.class == EntityType::Creep
                {
                    head_pos.z += 45f32;
                }
                else
                {
                    // if ent.previous_pos == ent.game_scene_node.position
                    // {
                    //     i += 1;
                    //     continue;
                    // }
                }
                if !ent.game_scene_node.dormant && game.view_matrix.transform(&mut head_pos) && in_fov(head_pos, center, settings.fov)
                {
                    let cur_distance = Vector3::distance_2d(head_pos, Vector3::from_pos2(center));
                    if cur_distance < distance && Vector3::distance(ent.game_scene_node.position, local_player.game_scene_node.position) < settings.range
                    {
                        priority = ent.class.as_priority();
                        distance = cur_distance;
                        unsafe { entity_array_index = Some(i) };
                    }
                }
            }
            i += 1;
    }
}

fn calc_velocity(world_pos: Vector3, velocity: Vector3, settings: &AimProperties) -> Vector3
{
    Vector3 {
        x: world_pos.x + velocity.x / settings.velocity_div_dav,
        y: world_pos.y + velocity.y / settings.velocity_div_dav,
        z: world_pos.z + velocity.z / settings.velocity_div_dav,
    }
}

fn aim_to(point_world: Vector3, angle_per_pixel: f32, game: &External, settings: &AimProperties, socket: &UdpSocket)
{
    let mut aim_punch = Vector3::default();
    if settings.rcs
    {
        aim_punch = game.aim_punch;
    }

    let aim_direction = get_aim_direction(game.client_ptr, aim_punch);
    let aim_direction_desired = Vector3::normalize(point_world - game.camera.position);

    let aim_angles = Vector3 {
        x: angle_to_signed(aim_direction_desired, aim_direction, Vector3 { x: 0f32, y: 0f32, z: 1f32 }),
        y: angle_to_signed(aim_direction_desired, aim_direction, Vector3::normalize(Vector3::cross(aim_direction_desired, Vector3 { x: 0f32, y: 0f32, z: 1f32 }))),
        z: 0f32,
    };

    let aim_angles = Vector3::mul(Vector3::div(aim_angles, settings.smooth), 1f32);

    // Могут быть проблемы, FOV 90
    let aim_pixels = Pos2 {
        x: ((aim_angles.x / angle_per_pixel) * 100f32).round() / 100f32,
        y: ((aim_angles.y / angle_per_pixel) * 100f32).round() / 100f32,
        // x: (aim_angles.x / angle_per_pixel).round(),
        // y: (aim_angles.y / angle_per_pixel).round(),
    };

    if aim_pixels.x != 0f32 || aim_pixels.y != 0f32
    {
        crate::connection::send_move(socket, aim_pixels.x as i32, aim_pixels.y as i32);
    }
}

fn get_aim_direction(client_ptr: *mut c_void, punch: Vector3) -> Vector3
{
    let mut camera = Camera::default();
    camera.update(client_ptr);
    camera.view_angles.x += punch.x;
    camera.view_angles.y += punch.y;
    vector_from_euler_angles(camera.view_angles.x.to_radians(), camera.view_angles.y.to_radians())
}

// vec2.y
fn angle_to_signed(vec1: Vector3, vec2: Vector3, about: Vector3) -> f32
{
    let mut vec2 = vec2;
    vec2.z = vec2.z * -1f32;

    let plane = Plane3D::from_point(about, Vector3::default());
    let vector_on_plane = Vector3::normalize(plane.project_vector(vec1).1);
    let other_on_plane =  Vector3::normalize(plane.project_vector(vec2).1);

    let sign = Vector3::dot(Vector3::normalize(Vector3::cross(vector_on_plane, other_on_plane)), plane.normal);
    angle_between_unit_vectors(vector_on_plane, other_on_plane) * sign
}

fn angle_between_unit_vectors(left_normalized: Vector3, right_normalized: Vector3) -> f32
{
    acos_clamped(Vector3::dot(left_normalized, right_normalized), 1E-6)
}

fn acos_clamped(value: f32, tolerance: f32) -> f32
{
    if value > 1f32 - tolerance
    {
        return 0f32;
    }
    if value < tolerance - 1f32
    {
        return  std::f32::consts::PI; // здец
    }
    value.acos()
}

fn angle_to(vector: Vector3, other: Vector3) -> f32 {
    Vector3::dot(Vector3::normalize(vector), Vector3::normalize(other)).acos()
}

fn vector_from_euler_angles(phi: f32, theta: f32) -> Vector3
{
    Vector3::normalize(Vector3 {
        x: phi.cos() * theta.cos(),
        y: phi.cos() * theta.sin(),
        z: phi.sin(),
    })
}

fn calibrate_angle(delta_pixels: i32, client_ptr: *mut c_void) -> f32 {
    thread::sleep(Duration::from_millis(30));
    let mut eye_dir_start = get_aim_direction(client_ptr, Vector3::default());
    mouse::send_move(delta_pixels, 0);
    thread::sleep(Duration::from_millis(30));
    let mut eye_dir_end = get_aim_direction(client_ptr, Vector3::default());

    eye_dir_start.z = 0.;
    eye_dir_end.z = 0.;

    angle_to(eye_dir_start, eye_dir_end) / (delta_pixels as f32).abs()
}

pub fn calibrate(game: &mut External) -> f32
{
    let client_ptr = game.client_ptr;
    thread::sleep(Duration::from_millis(300));
    let mut angles: Vec<f32> = Vec::new();
    angles.push(calibrate_angle(10, client_ptr));
    angles.push(calibrate_angle(10, client_ptr));
    angles.push(calibrate_angle(10, client_ptr));
    
    angles.push(calibrate_angle(-10, client_ptr));
    angles.push(calibrate_angle(-10, client_ptr));
    angles.push(calibrate_angle(-10, client_ptr));

    angles.retain(|&x| x != 0.0 && !x.is_nan());

    let sum: f32 = angles.iter().sum();
    let average = sum / angles.len() as f32;
    log::info!("Angles avg: {average}");
    average
}

fn in_fov(p: Vector3, c: Pos2, radius: f32) -> bool
{
    Vector3::distance(p, Vector3::from_pos2(c)) <= radius
}
static mut player_index: Option<usize> = None;
static mut entity_array_index: Option<usize> = None;