use std::ffi::c_void;
use crate::{external::offsets::client_dll::*, memory::read_memory};
use super::{enums::Hero, math::Vector3};


#[derive(Default)]
#[derive(Clone, Copy)]
pub struct GameSceneNode
{
    pub position: super::math::Vector3
}

impl GameSceneNode
{
    pub fn update(&mut self, pawn_ptr: *mut c_void)
    {
        unsafe {
            let game_scene_node: *mut c_void = read_memory(pawn_ptr.add(0x328));
            self.position = read_memory(game_scene_node.add(0xD0));
        }
    }
}

#[derive(Default)]
pub struct PlayerDataGlobal
{
    pub hero: Hero,
    pub alive: bool
}

impl PlayerDataGlobal
{
    pub fn update(&mut self, controller_ptr: *mut c_void)
    {
        unsafe {
            let struct_offset: *mut c_void = controller_ptr.add(CCitadelPlayerController::m_PlayerDataGlobal);
            let hero_id: i32 = read_memory(struct_offset.add(PlayerDataGlobal_t::m_nHeroID));
            self.alive = read_memory(struct_offset.add(PlayerDataGlobal_t::m_bAlive));

            match Hero::try_from(hero_id)  {
                Ok(hero) => self.hero = hero,
                Err(_) => {
                    log::warn!("Unknown hero index: {}", hero_id);
                    self.hero = Hero::None
                }
            }
        }
    }
}

#[derive(Debug)]
pub struct Skeleton
{
    pub head_pos: Vector3,
    bone_array: *mut c_void
}

impl Default for Skeleton
{
    fn default() -> Self {
        Self { head_pos: Default::default(), bone_array: 0 as *mut c_void }
    }
}

impl Skeleton
{
    pub fn update(&mut self, pawn_ptr: *mut c_void, hero: Hero)
    {
        unsafe {
            let game_scene_node: *mut c_void = read_memory(pawn_ptr.add(C_BaseEntity::m_pGameSceneNode));
            self.bone_array = read_memory(game_scene_node.add(CSkeletonInstance::m_modelState + 0x80));
            
            if hero != Hero::None
            {
                let bone_index = hero.get_head_bone();
                match bone_index {
                    Some(i) => 
                    {
                        if i != 0
                        {
                            self.update_head(i);
                            return;
                        }
                    },
                    None => 
                    {
                        log::warn!("unknown hero index");
                        return;
                    },
                }
            }
            self.update_head_unknown();
        }
    }

    pub unsafe fn update_head_unknown(&mut self)
    {
        self.head_pos.z = -100.;
        for i in 0..64
        {
            let vec3: Vector3 = read_memory(self.bone_array.add(i as usize * 32usize));
            if vec3.z > self.head_pos.z
            {
                self.head_pos = vec3;
            }
        }
    }

    unsafe fn update_head(&mut self, index: i32)
    {
        self.head_pos = read_memory(self.bone_array.add(index as usize * 32usize));
    }
}

pub struct Controller
{
    pub(super) ptr: *mut c_void,
    pub local: bool
}

impl Default for Controller
{
    fn default() -> Self {
        Self {
            ptr: 0 as *mut c_void,
            local: false
        }
    }
}

impl Controller
{
    unsafe fn get_ptr(&mut self, base_ptr: *mut c_void, index: i32) -> *mut c_void
    {
        return read_memory(base_ptr.offset(0x78 * (index & 0x1FF) as isize));
    }

    pub fn update(&mut self, base_ptr: *mut c_void, index: i32)
    {
        unsafe {
            self.ptr = self.get_ptr(base_ptr, index);
            self.local = read_memory(self.ptr.add(CBasePlayerController::m_bIsLocalPlayerController));
        }
    }
}

pub struct Pawn
{
    pub(super) ptr: *mut c_void,
    pub health: i32,
    pub max_health: i32,
    pub team: i32,
}

impl Default for Pawn
{
    fn default() -> Self {
        Self {
            ptr: 0 as *mut c_void,
            health: 0,
            max_health: 0,
            team: 0,
        }
    }
}

impl Pawn
{
    unsafe fn get_ptr(&mut self, entry: *mut c_void, pawn_handle: *mut c_void) -> *mut c_void
    {
        read_memory(entry.add(0x78 * (pawn_handle as usize & 0x1FF)))
    }

    pub fn update(&mut self, entry: *mut c_void, pawn_handle: *mut c_void)
    {
        unsafe {
            self.ptr = self.get_ptr(entry, pawn_handle);
            self.health = read_memory(self.ptr.add(C_BaseEntity::m_iHealth));
            self.max_health = read_memory(self.ptr.add(C_BaseEntity::m_iMaxHealth));
            self.team = read_memory(self.ptr.add(C_BaseEntity::m_iTeamNum));
        }
    }
}