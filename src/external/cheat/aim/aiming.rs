use std::{ffi::c_void, thread, time::Duration};

use egui::Pos2;

use crate::{external::{interfaces::{entities::Entity, math::{Plane3D, Vector3}, structs::Camera}, External}, input::{keyboard::KeyState, mouse}, settings::structs::{AimProperties, AimSettings}};

pub fn update(settings: &AimSettings, game: &External)
{
    if settings.angle_per_pixel == 0.
    {
        return;
    }
    if settings.players.key.state == KeyState::None
    {
        unsafe { player_index = None };
    }
    if settings.players.enable {
        find_player(game, settings.players.fov);
    }

    if settings.players.key.state == KeyState::Down
    {
        unsafe {
            match player_index {
                Some(index) => {
                    let target = game.get_player_by_index(index);
                    aim_to(target.skeleton.head_pos.clone(), settings.angle_per_pixel, game, &settings.players);
                },
                None => {
                    match entity {
                        Some(_) => {

                        },
                        None => {},
                    }
                },
            }
        }
    }
}

fn find_player(game: &External, fov: f32)
{
    unsafe { player_index = None };
    let mut distance = 9999f32;
    let center = game.screen.center();
    for p in game.players.iter()
    {
        if p.pawn.team != game.get_local_player().pawn.team && p.is_alive()
        {
            let mut head_pos = p.skeleton.head_pos.clone();
            if game.view_matrix.transform(&mut head_pos) && in_fov(head_pos, center, fov)
            {
                let cur_distance = Vector3::distance_2d(head_pos, Vector3::from_pos2(center));
                if cur_distance < distance
                {
                    distance = cur_distance;
                    unsafe { player_index = Some(p.index as usize) };
                }
            }
        }
    }
}

fn aim_to(point_world: Vector3, angle_per_pixel: f32, game: &External, settings: &AimProperties)
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

    // Могут быть проблемы, если FOV 90
    let aim_pixels = Pos2 {
        x: ((aim_angles.x / angle_per_pixel) * 100f32).round() / 100f32,
        y: ((aim_angles.y / angle_per_pixel) * 100f32).round() / 100f32,
        // x: (aim_angles.x / angle_per_pixel).round(),
        // y: (aim_angles.y / angle_per_pixel).round(),
    };

    if aim_pixels.x != 0f32 || aim_pixels.y != 0f32
    {
        mouse::send_move(aim_pixels.x as i32, aim_pixels.y as i32);
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
        return 3.14159265358979323846f32; // здец
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
static mut entity: Option<Entity> = None;