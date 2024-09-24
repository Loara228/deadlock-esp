mod offsets;
pub (crate) mod interfaces;
mod cheat;

use self::cheat::aim::drawing;
use std::{ffi::c_void, sync::mpsc::{self, Receiver}};
use cheat::esp::{boxes::draw_head, radar};
use interfaces::{entities::{Entity, Player}, math::Matrix, structs::Camera};
use crate::{memory::{self, read_memory}, settings::structs::Settings, ENT_LIST_DELAY_1, ENT_LIST_DELAY_2, ENT_LIST_END, ENT_LIST_START};

pub struct External
{
    client_ptr: *mut c_void,
    pub entity_list_ptr: *mut c_void,
    players: [Player; 12],
    pub view_matrix: Matrix,
    pub local_player_index: usize,
    pub camera: Camera,
    pub entities: Vec<Entity>
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
                local_player_index: 0,
                camera: Camera::default(),
                entities: Vec::new()
            }
        }
    }

    pub fn update(&mut self)
    {
        self.camera.update(self.client_ptr);
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
                        player.draw(&self.view_matrix, g, settings);
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
}

pub fn run_thr(entity_list_ptr: usize) -> Receiver<Option<Vec<Entity>>> {
    let (sender, receiver) = mpsc::channel::<Option<Vec<Entity>>>();
    let sender2 = sender.clone();
    std::thread::spawn(move || {
        let mut entities = Vec::<Entity>::new();
        for i in ENT_LIST_START..ENT_LIST_END
        {
            entities.push(Entity::new(i));
        }
        loop {
            for entity in entities.iter_mut() {
                entity.update(entity_list_ptr);
            }
            sender.send(Some(entities.clone())).unwrap();
            std::thread::sleep(std::time::Duration::from_millis(ENT_LIST_DELAY_1));
        }
    });
    std::thread::spawn(move || {
        loop {
            sender2.send(None).unwrap();
            std::thread::sleep(std::time::Duration::from_millis(ENT_LIST_DELAY_2));
        }
    });
    receiver
}