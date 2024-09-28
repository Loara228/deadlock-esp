pub (crate) mod offsets;
pub (crate) mod interfaces;
pub mod cheat;

use self::cheat::aim::drawing;
use std::ffi::c_void;
use cheat::esp::{boxes::draw_head, radar};
use egui::Pos2;
use interfaces::{entities::{Entity, Player}, math::{Matrix, Vector3}, structs::Camera};
use offsets::client_dll::{CPlayer_CameraServices, C_BasePlayerPawn};
use crate::{memory::{self, read_memory}, settings::structs::Settings};

const PLAYERS_LEN: usize = 12 + 1;

pub struct External
{
    pub(crate) client_ptr: *mut c_void,
    pub entity_list_ptr: *mut c_void,
    players: [Player; PLAYERS_LEN],
    pub view_matrix: Matrix,
    pub local_player_index: usize,
    pub camera: Camera,
    pub entities: Vec<Entity>,
    pub screen: egui::Rect,
    pub aim_punch: Vector3
}

impl External
{
    pub fn new() -> Self
    {
        unsafe 
        {
            let client_ptr = memory::CLIENT_MODULE.lpBaseOfDll;
            let players: [Player; PLAYERS_LEN] =
            [
               Player::new(1), Player::new(2), Player::new(3),
               Player::new(4), Player::new(5), Player::new(6),
               Player::new(7), Player::new(8), Player::new(9),
               Player::new(10), Player::new(11), Player::new(12), Player::new(13) // на всякий еще добавил
            ];
            let mut entities: Vec<Entity> = Vec::new();
            for i in crate::ENT_LIST_START..crate::ENT_LIST_END
            {
                entities.push(Entity::new(i));
            }
            Self
            {
                client_ptr,
                entity_list_ptr: memory::read_memory(client_ptr.add(offsets::client::dwEntityList)),
                players,
                view_matrix: Matrix::default(),
                local_player_index: 0,
                camera: Camera::default(),
                entities,
                screen: egui::Rect::from_two_pos(Pos2::default(), Pos2::default()),
                aim_punch: Vector3::default()
            }
        }
    }

    pub fn update(&mut self)
    {
        self.camera.update(self.client_ptr);
        unsafe {
            let matrix: Matrix = read_memory(self.client_ptr.add(offsets::client::dwViewMatrix));
            let matrix = Matrix::transpose(matrix);
            
            let viewport = Matrix::get_viewport(egui::Vec2 { x: self.screen.max.x, y: self.screen.max.y });
            self.view_matrix = matrix * viewport;
        }
        self.update_players();
        self.update_entities();
    }

    fn update_entities(&mut self)
    {
        for i in 0..self.entities.len()
        {
            self.entities[i].update(self.entity_list_ptr as usize);
        }
    }

    fn update_players(&mut self)
    {
        for player in self.players.iter_mut()
        {
            if player.update(self.entity_list_ptr, &self.view_matrix)
            {
                self.local_player_index = player.index as usize;
            }
        }
        if self.local_player_index != 0
        {
            let local_player = self.get_local_player();
            unsafe {
                let camera_services: *mut c_void = read_memory(local_player.pawn.ptr.add(C_BasePlayerPawn::m_pCameraServices));
                self.aim_punch = read_memory(camera_services.add(CPlayer_CameraServices::m_vecPunchAngle));
            }
        }
    }

    pub fn draw(&mut self, g: &egui::Painter, settings: &Settings)
    {
        if self.local_player_index != 0
        {
            let local_player = &self.players[self.local_player_index - 1];
            if settings.aim.players.enable || settings.aim.creeps.enable
            {
                drawing::draw(g, &settings.aim, &self.entities, &self.view_matrix, local_player);
            }
            if settings.esp_players.render
            {
                for player in self.players.iter() // order by distance?
                {
                    if !player.is_invalid() && player.is_alive() && player.pawn.team != local_player.pawn.team
                    {
                        player.draw(&self.view_matrix, g, settings, local_player);
                        if settings.esp_players.glow
                        {
                            draw_head(g, player, settings, &self.view_matrix);
                        }
                    }
                }
            }
        }
        radar::draw_radar(g, &settings.radar, &self);
    }

    pub fn get_local_player(&self) -> &Player {
        self.get_player_by_index(self.local_player_index)
    }

    pub fn get_player_by_index(&self, index: usize) -> &Player {
        &self.players[index - 1]
    }
}