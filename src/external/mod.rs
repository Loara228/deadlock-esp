pub (crate) mod offsets;
pub (crate) mod interfaces;
pub mod cheat;

use std::{ffi::c_void, sync::{Arc, Mutex}, time::Instant};
use cheat::{aim, esp::{boxes::draw_head, offscreen, radar}, scripts::{HeroScript, HeroScriptSettings}};
use egui::{Pos2, Ui};
use egui_notify::Toasts;
use interfaces::{entities::{Entity, Player}, enums::{Hero, TargetBone}, math::{Matrix, Vector3}, structs::{Camera, Observers}};
use offsets::client_dll::{CPlayer_CameraServices, C_BasePlayerPawn, C_GameRules};
use crate::{input::keyboard::KeyState, memory::{self, read_memory}, settings::structs::Settings};

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
    pub aim_punch: Vector3,
    pub global_vars: GlobalVars,
    pub game_rules: GameRules,
    pub observers: Observers,
    pub last_ent_aim_time: Instant
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
            Self
            {
                client_ptr,
                entity_list_ptr: memory::read_memory(client_ptr.add(offsets::client::dwEntityList)),
                players,
                view_matrix: Matrix::default(),
                local_player_index: 0,
                camera: Camera::default(),
                entities: Vec::new(),
                screen: egui::Rect::from_two_pos(Pos2::default(), Pos2::default()),
                aim_punch: Vector3::default(),
                global_vars: GlobalVars::default(),
                game_rules: GameRules::default(),
                observers: Observers::default(),
                last_ent_aim_time: Instant::now()
            }
        }
    }

    pub fn update(&mut self, hero_scripts: &mut Vec<(Arc<Mutex<dyn HeroScript>>, HeroScriptSettings)>, settings: &mut Settings)
    {
        self.global_vars.update(self.client_ptr);
        self.game_rules.update(self.client_ptr, self.global_vars.interval);
        self.camera.update(self.client_ptr);
        unsafe {
            let matrix: Matrix = read_memory(self.client_ptr.add(offsets::client::dwViewMatrix));
            let matrix = Matrix::transpose(matrix);
            
            let viewport = Matrix::get_viewport(egui::Vec2 { x: self.screen.max.x, y: self.screen.max.y });
            self.view_matrix = matrix * viewport;
        }
        self.update_players(&settings.aim.aim_bone);
        self.update_observers();
        self.update_entities();
        if self.local_player_index != 0 {
            Self::update_scripts(self, hero_scripts, settings);
        }
    }

    fn update_scripts(game: &mut External, hero_scripts: &mut Vec<(Arc<Mutex<dyn HeroScript>>, HeroScriptSettings)>, settings: &mut Settings) {
        let local_player = &game.players[game.local_player_index - 1];
        for hero_script in hero_scripts.iter_mut() {
            if !hero_script.1.enabled {
                continue;
            }
            let hero = hero_script.0.lock().unwrap().hero_id();
            if hero == Hero::None || hero == local_player.data.hero {
                match &mut hero_script.1.key {
                    Some(key) => {
                        key.update();
                        hero_script.0.lock().unwrap().update(game, key.state, settings);
                    },
                    None => {
                        hero_script.0.lock().unwrap().update(game, KeyState::None, settings);
                    }
                }
            }
        }
    }

    fn update_observers(&mut self) {
        if self.local_player_index == 0 {
            return;
        }
        let local_player = &self.players[self.local_player_index - 1];
        self.observers.update(self.entity_list_ptr, local_player, &self.players);
    }

    fn update_entities(&mut self)
    {
        if self.local_player_index == 0 { return; }

        let count = if self.last_ent_aim_time.elapsed().as_secs_f32() > 3f32 {
            0
        } else {
            unsafe {
                read_memory::<i32>(self.entity_list_ptr.add(offsets::client::highestEntityIndex))
            }
        };

        let mut entities: Vec<Entity> = Vec::new();
        unsafe {
            for i in 0..count {
                entities.push(Entity::new(i, memory::read_memory(self.client_ptr.add(offsets::client::dwEntityList))));
            }
        }

        self.entities = entities;
        for i in 0..self.entities.len() // CEntInfo
        {
            self.entities[i].update();
        }
    }

    fn update_players(&mut self, target_bone: &TargetBone)
    {
        for player in self.players.iter_mut()
        {
            if player.update(self.entity_list_ptr, &self.view_matrix, target_bone)
            {
                self.local_player_index = player.index as usize;
            }
        }
        if self.local_player_index != 0
        {
            let local_player = &mut self.players[self.local_player_index - 1];
            local_player.abilities.update(self.entity_list_ptr, local_player.pawn.ptr);
            unsafe {
                let camera_services: *mut c_void = read_memory(local_player.pawn.ptr.add(C_BasePlayerPawn::m_pCameraServices));
                self.aim_punch = read_memory(camera_services.add(CPlayer_CameraServices::m_vecPunchAngle));
            }
        }
    }

    pub fn draw(&mut self, ui: &mut Ui, settings: &Settings, hero_scripts: &mut Vec<(Arc<Mutex<dyn HeroScript>>, HeroScriptSettings)>, toasts: &mut Toasts)
    {
        if self.local_player_index != 0
        {
            let local_player = &self.players[self.local_player_index - 1];
            if settings.aim.players.enable || settings.aim.creeps.enable
            {
                aim::drawing::draw(ui.painter(), &settings.aim, &self.entities, &self.view_matrix, local_player);
            }
            if settings.esp_players.render
            {
                for player in self.players.iter()
                {
                    if !player.is_invalid() && player.is_alive() && player.pawn.team != local_player.pawn.team
                    {
                        player.draw(&self.view_matrix, ui, settings, local_player);
                        if settings.esp_players.glow
                        {
                            draw_head(ui.painter(), player, settings, &self.view_matrix);
                        }
                    }
                }
                if settings.offscreen.enable {
                    // p_i, p_distance;
                    let local_pos = local_player.game_scene_node.position;
                    let mut p_indexes: Vec<(i32, f32)> = Vec::new();
                    for player in self.players.iter() {
                        p_indexes.push((player.index, Vector3::distance(player.game_scene_node.position, local_pos)));
                    }
                    p_indexes.sort_by(|a, b| a.1.total_cmp(&b.1));
                    let mut i: usize = 0;
                    for p_i in p_indexes {
                        let player = self.get_player_by_index(p_i.0 as usize);
                        if !player.is_invalid() && player.is_alive() && player.pawn.team != local_player.pawn.team {
                            offscreen::draw(ui, player, local_player, &self.view_matrix, settings, i);
                            i += 1;
                        }
                    }

                    // for player in self.players.iter() {
                    //     if !player.is_invalid() && player.is_alive() && player.pawn.team != local_player.pawn.team {
                    //         offscreen::draw(ui, player, local_player, &self.view_matrix, settings);
                    //     }
                    // }
                }
            }
            Self::draw_scripts(ui.painter(), &self, hero_scripts, toasts);
        }
        radar::draw_radar(ui, &settings.radar, &self);
    }

    fn draw_scripts(g: &egui::Painter, game: &External, hero_scripts: &mut Vec<(Arc<Mutex<dyn HeroScript>>, HeroScriptSettings)>, toasts: &mut Toasts) {
        let local_player = game.get_local_player();
        for hero_script in hero_scripts.iter() {
            if !hero_script.1.enabled {
                continue;
            }
            let hero = hero_script.0.lock().unwrap().hero_id();
            if hero == Hero::None || hero == local_player.data.hero {
                hero_script.0.lock().unwrap().draw(g, game, toasts);
            }
        }
    }

    pub fn get_local_player(&self) -> &Player {
        self.get_player_by_index(self.local_player_index)
    }

    pub fn get_player_by_index(&self, index: usize) -> &Player {
        &self.players[index - 1]
    }
}

// float RealTime; //0x0000
// uint32_t FrameCount; //0x0004
// float IntervalPerTick1; //0x0008
// float IntervalPerTick2; //0x000C
// uint32_t MaxClients; //0x0010
// uint32_t unk; //0x0014
// uint32_t unk1; //0x0018
// float N00001935; //0x001C
// double N00001953; //0x0020
// char pad_0028[8]; //0x0028
// float N00001937; //0x0030
// float Curtime; //0x0034
// float Curtime2; //0x0038
// uint32_t N0000195B; //0x003C
// uint32_t N00001939; //0x0040
// uint32_t N0000195E; //0x0044
// uint32_t outSequenceNumber; //0x0048
// uint32_t inSequenceNumber; //0x004C
// float ServerTime; //0x0050
// char pad_0054[4]; //0x0054
// float sendInterval; //0x0058
// uint32_t N00001969; //0x005C
// class N0000196D* NetChanPtr; //0x0060
// char pad_0068[280]; //0x0068
// char* CurrentMap; //0x0180
// char* CurrentMapName; //0x0188

#[derive(Default)]
#[derive(Debug)]
pub struct GlobalVars
{
    interval: f32,
    current_time: f32,
    // paused: bool
}

impl GlobalVars
{
    pub fn update(&mut self, client_ptr: *mut c_void) {
        unsafe {
            let global_vars: *mut c_void = read_memory(client_ptr.add(offsets::client::dwGlobalVars));
            // self.interval = read_memory(global_vars.add(0x000C));
            self.interval = 0.016666666f32;
            self.current_time = read_memory(global_vars.add(0x34));
        }
    }
}

#[derive(Default)]
#[derive(Debug)]
pub struct GameRules {
    // paused: bool,
    paused_time: f32
}

impl GameRules {
    pub fn update(&mut self, client_ptr: *mut c_void, interval: f32) {
        unsafe {
            let game_rules: *mut c_void = read_memory(client_ptr.add(offsets::client::dwGameRules));
            let paused_ticks: i32 = read_memory(game_rules.add(C_GameRules::m_nTotalPausedTicks));
            self.paused_time = Self::ticks_to_time(paused_ticks, interval);
        }
    }

    // #define TIME_TO_TICKS( dt )		( (int)( 0.5f + (float)(dt) / TICK_INTERVAL ) )
    // #define TICKS_TO_TIME( t )		( TICK_INTERVAL *( t ) )
    fn ticks_to_time(ticks: i32, interval_per_tick: f32) -> f32 {
        interval_per_tick * ticks as f32
    }
}

//m_bServerPaused