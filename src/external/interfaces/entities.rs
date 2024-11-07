use core::f32;
use std::ffi::c_void;

use egui::{epaint::PathStroke, Color32, Pos2, Rect, Ui};

use crate::{external::{cheat::esp::*, offsets::client_dll::{CBasePlayerController, CEntityIdentity}}, memory::{read_memory, read_memory_bytes}, settings::structs::{AimSettings, Settings}};
use super::{enums::{EntityType, TargetBone}, math::{Matrix, Vector3}, structs::{AbilitiesComponent, Controller, GameSceneNode, Pawn, PlayerDataGlobal, Skeleton}};

trait EntityBase
{
    fn read_base(&mut self, index: i32, entity_list_ptr: *mut c_void) -> *mut c_void {
        unsafe {
            read_memory(entity_list_ptr.add((((index & 0x7FFF) >> 9) * 8 + 16) as usize))
        }
    }
}

#[derive(Clone, Copy)]
pub struct Entity
{
    pub index: i32,
    pub pawn: Pawn,
    pub class: EntityType,
    pub game_scene_node: GameSceneNode,
    entry: *mut c_void
}

impl EntityBase for Entity
{
}

impl Entity
{
    pub fn new(index: i32, entity_list_ptr: *mut c_void) -> Self
    {
        unsafe {
            Self {
                index,
                pawn: Pawn::default(),
                class: EntityType::None,
                game_scene_node: GameSceneNode::default(),
                entry: read_memory(entity_list_ptr.add((((index & 0x7FFF) >> 9) * 8 + 16) as usize))
            }
        }
    }

    // #[deprecated(note="entities?")]
    pub fn update(&mut self)
    {
        self.class = EntityType::None;
        self.game_scene_node.dormant = false;
        self.pawn.update_entity(self.entry, self.index as usize);
        
        if self.pawn.ptr == std::ptr::null_mut() || (self.pawn.pawn_health < 0)
        {
            return;
        }
        let entity_identity = self.get_identity();
        let class_name = self.get_class_name(entity_identity);
        
        match EntityType::from_class_name(class_name)
        {
            Some(class_type) => 
            {
                self.class = class_type;
            },
            None => {
                self.class = EntityType::None;
                return;
            },
        }
        self.game_scene_node.update(self.pawn.ptr as *mut c_void);
    }

    pub fn get_identity(&self) -> *mut c_void
    {
        unsafe {
            let entity_identity: *mut c_void = read_memory((self.pawn.ptr as *mut c_void).add(0x10));
            return entity_identity;
        }
    }

    pub fn get_class_name(&self, entity_identity: *mut c_void) -> Vec<u8> {
        unsafe {
            let class_name_ptr: *mut c_void = read_memory(entity_identity.add(0x20));
            read_memory_bytes(class_name_ptr, 7)
        }
    }

    pub fn is_last(&self, entity_identity: *mut c_void) -> bool {
        unsafe {
            let next: *mut c_void = read_memory(entity_identity.add(CEntityIdentity::m_pNext));
            println!("{} {next:?}", self.index);
            false
        }
    }

    pub fn continue_alive(&self) -> bool
    {
        self.class == EntityType::None && self.game_scene_node.dormant
    }

    pub fn check_creep(&self, local_player: &Player) -> bool
    {
        if self.class == EntityType::Creep
        {
            if self.pawn.pawn_health == 0
            {
                return true;
            }
            if self.pawn.team != 263171 && self.pawn.team != 263170
            {
                return  true;
            }
            else
            {
                let enemy_team = if local_player.pawn.team == 2 {
                    263171
                } else {
                    263170
                };
                return self.pawn.team != enemy_team;
            }
        }
        return false;
    }

    pub fn draw(&self, g: &egui::Painter, matrix: &Matrix, settings: &AimSettings)
    {
        let mut screen_pos = self.game_scene_node.position;
        match self.class
        {
            EntityType::Soul => 
            {
                if matrix.transform(&mut screen_pos)
                {
                    g.circle_filled(Pos2::new(screen_pos.x, screen_pos.y), 4., settings.soul_color);
                }
            },
            EntityType::Creep => 
            {
                if matrix.transform(&mut screen_pos)
                {
                    let mut lines: Vec<[Vector3; 2]> = Vec::new();
                    const VERTICES: usize = 8;
                    const RADIUS: f32 = 16f32;

                    for i in (0..VERTICES).step_by(1) {
                        let angle = 2f32 * f32::consts::PI * i as f32 / VERTICES as f32;
                        let x = self.game_scene_node.position.x + RADIUS * f32::cos(angle);
                        let y = self.game_scene_node.position.y + RADIUS * f32::sin(angle);
                        let z = self.game_scene_node.position.z;

                        let angle = 2f32 * f32::consts::PI * (i + 1) as f32 / VERTICES as f32;
                        let x2 = self.game_scene_node.position.x + RADIUS * f32::cos(angle);
                        let y2 = self.game_scene_node.position.y + RADIUS * f32::sin(angle);
                        let z2 = self.game_scene_node.position.z;

                        lines.push([Vector3 { x, y, z }, Vector3 { x: x2, y: y2, z: z2 }]);
                    }
                    let mut color = Color32::WHITE;
                    if self.pawn.pawn_health < 150
                    {
                        color = Color32::ORANGE;
                    }
                    if self.pawn.pawn_health <= 50
                    {
                        color = Color32::RED;
                    }
                    let stroke = PathStroke::new(2f32, color);
                    for line in lines.iter_mut() {
                        if !matrix.transform(&mut line[0]) {
                            continue;
                        }
                        if !matrix.transform(&mut line[1]) {
                            continue;
                        }
                        g.line_segment([line[0].to_pos2(), line[1].to_pos2()], stroke.clone());
                    }
                }
            },
            EntityType::None => (),
        }
    }
}

pub struct Player
{
    pub index: i32,
    pub pawn: Pawn,
    pub rect: Rect,

    pub game_scene_node: GameSceneNode,
    pub controller: Controller,

    pub skeleton: Skeleton,
    pub data: PlayerDataGlobal,
    pub abilities: AbilitiesComponent
}

impl EntityBase for Player
{
}

impl Player
{
    pub fn new(index: i32) -> Self
    {
        Self {
            index,
            game_scene_node: Default::default(),
            controller: Default::default(),
            pawn: Pawn::default(),
            skeleton: Skeleton::default(),
            data: PlayerDataGlobal::default(),
            rect: Rect { min: Pos2::default(), max: Pos2::default() },
            abilities: AbilitiesComponent::default()
        }
    }
    
    pub fn is_invalid(&self) -> bool
    {
        self.controller.ptr as usize == 0
    }

    pub fn is_alive(&self) -> bool
    {
        self.data.alive && self.data.health > 0
    }

    pub fn dead(&mut self)
    {
        self.data.alive = false;    
        self.rect = Rect {
            min: Default::default(),
            max: Default::default(),
        }
    }

    pub fn update(&mut self, entity_list_ptr: *mut c_void,  matrix: &Matrix, target_bone: &TargetBone) -> bool {
        let base_ptr = self.read_base(self.index, entity_list_ptr);
        if base_ptr as usize != 0
        {
            self.controller.update(base_ptr, self.index);
            unsafe {
                if !self.is_invalid()
                {
                    let pawn_handle: *mut c_void = read_memory(self.controller.ptr.add(CBasePlayerController::m_hPawn));
                    let list_entry: *mut c_void = read_memory(entity_list_ptr.add(0x8 * ((pawn_handle as usize & 0x7FFF) >> 0x9) + 0x10));
                    self.pawn.update(list_entry, pawn_handle as usize);
                    if self.pawn.ptr as i32 != 0
                    {
                        if self.data.health > self.data.max_health
                        {
                            self.data.max_health = self.data.health
                        }
                        self.game_scene_node.update(self.pawn.ptr as *mut c_void);
                        self.data.update(self.controller.ptr);
                        self.skeleton.update(self.pawn.ptr as *mut c_void, self.data.hero, target_bone);
                        self.update_rect(matrix);
                    }
                    else
                    {
                        self.dead();
                    }
                }
                else
                {
                    self.dead();
                }
            }
        }
        self.controller.local
    }

    fn update_rect(&mut self, matrix: &Matrix)
    {
        let mut point_top = self.skeleton.head_pos.clone();
        point_top.z += 10.;
        if matrix.transform(&mut point_top)
        {
            let mut point_bottom = self.game_scene_node.position.clone();
            point_bottom.z -= 10.;
            matrix.transform(&mut point_bottom);

            let height: f32 = point_bottom.y - point_top.y;
            let width: f32 = height / 2. * 1.15;
            self.rect = Rect::from_pos(Pos2 { x: point_bottom.x - (width / 2.), y: point_top.y });
            self.rect.set_width(width);
            self.rect.set_height(height);
        }
        else
        {
            self.rect = Rect {
                min: Default::default(),
                max: Default::default(),
            }
        }
    }

    pub fn draw(&self, matrix: &Matrix, ui: &mut Ui, settings: &Settings, local_player: &Player)
    {
        let mut screen_pos = self.game_scene_node.position.clone();
        if matrix.transform(&mut screen_pos)
        {
            boxes::draw_boxes(self.rect, ui.painter(), settings);
            text::draw(ui.painter(), self, local_player, settings);
            healthbar::draw(ui, self, &settings.healthbars);
        }
    }
}