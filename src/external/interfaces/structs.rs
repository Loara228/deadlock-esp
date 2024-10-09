use std::{ffi::c_void, fmt::Debug};
use crate::{external::{offsets::{client::*, client_dll::*}, PLAYERS_LEN}, memory::read_memory};
use super::{entities::Player, enums::{Hero, TargetBone}, math::Vector3};

pub unsafe fn from_handle(entity_list_ptr: *mut c_void, handle: *mut c_void) -> *mut c_void
{
    let list_entry: *mut c_void = read_memory(entity_list_ptr.add(0x8 * ((handle as usize & 0x7FFF) >> 0x9) + 0x10));
    let result: *mut c_void = read_memory(list_entry.add(0x78 * ( handle as usize & 0x1FF ) ));
    result
}

#[derive(Debug)]
#[derive(Default)]
#[derive(Clone, Copy)]
pub struct GameSceneNode
{
    pub position: super::math::Vector3,
    pub dormant: bool,
    pub view_angle_y: f32
}

impl GameSceneNode
{
    pub fn update(&mut self, pawn_ptr: *mut c_void)
    {
        unsafe {
            let game_scene_node: *mut c_void = read_memory(pawn_ptr.add(C_BaseEntity::m_pGameSceneNode));
            self.position = read_memory(game_scene_node.add(CGameSceneNode::m_vecAbsOrigin));
            self.dormant = read_memory(game_scene_node.add(CGameSceneNode::m_bDormant));
            self.view_angle_y = read_memory(game_scene_node.add(CGameSceneNode::m_angAbsRotation + 4usize));
        }
    }
}

#[derive(Debug)]
#[derive(Default)]
pub struct Abilities
{
    pub list: Vec<Ability>
}

impl Abilities
{
    pub unsafe  fn update(&mut self, entity_list_ptr: *mut c_void, pawn_ptr: *mut c_void) {
        if true {
            return;
        }
        self.list.clear();
        let ability_component = pawn_ptr.add(C_CitadelPlayerPawn::m_CCitadelAbilityComponent);
        let vec_abilities: *mut c_void = read_memory(ability_component.add(CCitadelAbilityComponent::m_vecAbilities + 0x8));
        for i in 10..18 {
            let ability_handle: *mut c_void = read_memory(vec_abilities.add(0x4 * i));
            if ability_handle as i32 == 0
            {
                continue;
            }
            let ability = from_handle(entity_list_ptr, ability_handle);

            self.list.push(Ability {
                index: i,
                cd_start: read_memory(ability.add(C_CitadelBaseAbility::m_flCooldownStart)),
                cd_end: read_memory(ability.add(C_CitadelBaseAbility::m_flCooldownEnd)),
                coodown: read_memory(ability.add(C_CitadelBaseAbility::m_bIsCoolingDownInternal)),
            });
        }
    }
}

#[derive(Default)]
pub struct Observers
{
    pub spectator_list: Vec<String> // Индексы наблюдателей?
}

impl Observers
{
    pub fn update(&mut self, entity_list_ptr: *mut c_void, local_player: &Player, players: &[Player; PLAYERS_LEN])
    {
        self.spectator_list.clear();
        unsafe {
            if local_player.is_alive() {
                for player in players.iter() {
                    if player.is_alive() || player.pawn.ptr == local_player.pawn.ptr {
                        continue;
                    }
                    let player_obs_target_pawn = Self::get_obs_target_pawn(entity_list_ptr, player.pawn.ptr);
                    if local_player.pawn.ptr == player_obs_target_pawn {
                        self.spectator_list.push(format!("{:?}", player.data.hero));
                    }
                }
            }
            else
            {
                let local_player_obs_target_pawn = Self::get_obs_target_pawn(entity_list_ptr, local_player.pawn.ptr);
                for player in players.iter() {
                    if player.is_alive() || player.pawn.ptr == local_player.pawn.ptr {
                        continue;
                    }
                    let player_obs_target_pawn = Self::get_obs_target_pawn(entity_list_ptr, player.pawn.ptr);
                    if player_obs_target_pawn as i32 == 0i32 {
                        continue;
                    }
                    if local_player_obs_target_pawn == player_obs_target_pawn {
                        self.spectator_list.push(format!("{:?}", player.data.hero));
                    }
                }
            }
        }
    }

    unsafe fn get_obs_target_pawn(entity_list_ptr: *mut c_void, player_pawn: *mut c_void) -> *mut c_void
    {
        let player_obs: *mut c_void = read_memory(player_pawn.add(C_BasePlayerPawn::m_pObserverServices));
        let player_obs_target: *mut c_void = read_memory(player_obs.add(CPlayer_ObserverServices::m_hObserverTarget));
        let player_obs_target_pawn: *mut c_void = from_handle(entity_list_ptr, player_obs_target);
        player_obs_target_pawn
    }
}

#[derive(Debug)]
#[derive(Default)]
pub struct Ability
{
    pub index: usize,
    pub cd_start: f32,
    pub cd_end: f32,
    pub coodown: bool,
}

#[derive(Default)]
pub struct Camera
{
    pub view_angles: Vector3,
    pub position: Vector3,
}

impl Camera
{
    pub fn update(&mut self, client_ptr: *mut c_void)
    {
        unsafe {
            let camera_ptr: *mut c_void = read_memory(client_ptr.add(CCitadelCameraManager + 0x28));
            self.view_angles = read_memory(camera_ptr.add(0x44));
            self.position = read_memory(camera_ptr.add(0x38));
        }
    }
}

#[derive(Default)]
pub struct PlayerDataGlobal
{
    pub hero: Hero,
    pub alive: bool,
    pub ult_cd_time_end: f32
}

impl PlayerDataGlobal
{
    pub fn update(&mut self, controller_ptr: *mut c_void)
    {
        unsafe {
            let struct_offset: *mut c_void = controller_ptr.add(CCitadelPlayerController::m_PlayerDataGlobal);
            let hero_id: i32 = read_memory(struct_offset.add(PlayerDataGlobal_t::m_nHeroID));
            self.alive = read_memory(struct_offset.add(PlayerDataGlobal_t::m_bAlive));
            self.ult_cd_time_end = read_memory(struct_offset.add(PlayerDataGlobal_t::m_flUltimateCooldownEnd));

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
    pub target_bone_pos: Vector3,
    bone_array: *mut c_void
}

impl Default for Skeleton
{
    fn default() -> Self {
        Self {
            head_pos: Vector3::default(),
            bone_array: 0 as *mut c_void,
            target_bone_pos: Vector3::default()
        }
    }
}

impl Skeleton
{
    pub fn update(&mut self, pawn_ptr: *mut c_void, hero: Hero, target_bone: &TargetBone)
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
                        if i != -1
                        {
                            self.update_head(i);
                            if *target_bone == TargetBone::Neck {
                                let bone = TargetBone::Neck;
                                self.target_bone_pos = read_memory(self.bone_array.add(bone.get_bone_index(hero) as usize * 32usize));
                            }
                            else if *target_bone == TargetBone::Pelvis {
                                let bone = TargetBone::Pelvis;
                                self.target_bone_pos = read_memory(self.bone_array.add(bone.get_bone_index(hero) as usize * 32usize));
                            }
                            else if *target_bone == TargetBone::Chest {
                                let bone = TargetBone::Chest;
                                self.target_bone_pos = read_memory(self.bone_array.add(bone.get_bone_index(hero) as usize * 32usize));
                            }
                            else {
                                self.target_bone_pos = self.head_pos;
                            }
                            return;
                        }
                    },
                    None => 
                    {
                        log::trace!("Unknown hero index");
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

#[derive(Debug)]
#[derive(Clone, Copy)]
pub struct Pawn
{
    pub(crate) ptr: *mut c_void,
    pub health: i32,
    pub max_health: i32,
    pub team: i32,
    pub velocity: Vector3
}

impl Default for Pawn
{
    fn default() -> Self {
        Self {
            ptr: 0 as *mut c_void,
            health: 0,
            max_health: 0,
            team: 0,
            velocity: Vector3::default()
        }
    }
}

impl Pawn
{
    unsafe fn get_ptr(&mut self, entry: *mut c_void, pawn_handle: usize) -> *mut c_void
    {
        read_memory(entry.add(0x78 * (pawn_handle & 0x1FF)))
    }

    pub fn update(&mut self, entry: *mut c_void, pawn_handle: usize)
    {
        unsafe {
            self.ptr = self.get_ptr(entry, pawn_handle as usize);
            let ptr = self.ptr as *mut c_void;
            if self.ptr as usize == 0
            {
                return;
            }
            self.health = read_memory(ptr.add(C_BaseEntity::m_iHealth));
            self.max_health = read_memory(ptr.add(C_BaseEntity::m_iMaxHealth));
            self.team = read_memory(ptr.add(C_BaseEntity::m_iTeamNum));
            self.velocity = read_memory(ptr.add(C_BaseEntity::m_vecVelocity));
        }
    }
}