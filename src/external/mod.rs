mod offsets;
mod interfaces;
mod cheat;

use std::ffi::c_void;
use interfaces::{entities::Player, math::Matrix};
use crate::{memory::{self, read_memory}, settings::Settings};

pub struct External
{
    client_ptr: *mut c_void,
    pub entity_list_ptr: *mut c_void,
    players: [Player; 12],
    pub view_matrix: Matrix,
    pub local_player_index: usize
}

impl External
{
    pub fn new() -> Self
    {
        unsafe 
        {
            let client_ptr = memory::CLIENT_MODULE.lpBaseOfDll;
            let players: [Player; 12] =
            [
               Player::new(1), Player::new(2), Player::new(3),
               Player::new(4), Player::new(5), Player::new(6),
               Player::new(7), Player::new(8), Player::new(9),
               Player::new(10), Player::new(12),Player::new(13)
            ];
            Self
            {
                client_ptr,
                entity_list_ptr: memory::read_memory(client_ptr.add(offsets::client::dwEntityList)),
                players,
                view_matrix: Matrix::default(),
                local_player_index: 0
            }
        }
    }

    pub fn update(&mut self)
    {
        unsafe {
            let matrix: Matrix = read_memory(self.client_ptr.add(offsets::client::dwViewMatrix));
            let matrix = Matrix::transpose(matrix);
            let viewport = Matrix::get_viewport(egui::Vec2 { x: 1920f32, y: 1080f32 });
            self.view_matrix = matrix * viewport;
        }
        self.update_players();
    }

    pub fn update_players(&mut self)
    {
        for player in self.players.iter_mut()
        {
            if player.update(self.entity_list_ptr, &self.view_matrix)
            {
                self.local_player_index = player.index as usize;
            }
        }
    }

    pub fn draw(&mut self, g: &egui::Painter, settings: &Settings)
    {
        if self.local_player_index == 0
        {
            return;
        }
        let local_player = &self.players[self.local_player_index - 1];
        if settings.esp_players.render
        {
            for player in self.players.iter() // order by distance?
            {
                if !player.is_invalid() && player.is_alive() && player.pawn.team != local_player.pawn.team
                {
                    player.draw(&self.view_matrix, g, settings);
                }
            }
        }
    }
}