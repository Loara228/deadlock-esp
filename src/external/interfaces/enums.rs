#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

use egui::ImageSource;
use serde::{Deserialize, Serialize};

use crate::settings::structs::Priority;

use super::math::Vector3;

#[derive(PartialEq)]
#[derive(Debug)]
#[derive(Serialize, Deserialize)]
pub enum TargetBone
{
    Head,
    Neck,
    Pelvis,
    Chest
}

impl TargetBone {
    pub fn get_bone_index(&self, hero: Hero) -> i32 {
        if *self == TargetBone::Neck {
            return match hero {
                Hero::None => 0,
                Hero::Infernus => 29,
                Hero::Seven => 12, // GIGAWATT //
                Hero::Vindicta => 6, // HORNET //
                Hero::LadyGeist => 10, // GHOST //
                Hero::Abrams => 6, // ATLAS //
                Hero::Wraith => 6,
                Hero::McGinnis => 6, // ENGINEER/FORGE //
                Hero::Paradox => 7, // CHRONO //
                Hero::Dynamo => 12,
                Hero::Kelvin => 11,
                Hero::Haze => 6,
                Hero::Holliday => 11, // ASTRO //
                Hero::Bebop => 5,
                Hero::Calico => 12, // NANO
                Hero::GreyTalon => 16,
                Hero::MoAndKrill => 9, // DIGGER //
                Hero::Shiv => 12,
                Hero::Ivy => 12, // TENGU //
                Hero::Viper => 11, // KALI //
                Hero::Warden => 10,
                Hero::Yamato => 33,
                Hero::Lash => 11,
                Hero::Viscous => 6,
                Hero::Wrecker => 6, 
                Hero::Pocket => 12, // SYNTH //
                Hero::Mirage => 7,
                Hero::Fathom => 11, // SLORK //
                Hero::Dummy => 17,
                Hero::Magician => 11, 
                Hero::Trapper => 11, 
            }
        }
        else if *self == TargetBone::Pelvis {
            return match hero {
                Hero::None => 0,
                Hero::Infernus => 7,
                Hero::Seven => 7,
                Hero::Vindicta => 1,
                Hero::LadyGeist => 5,
                Hero::Abrams => 1,
                Hero::Wraith => 1,
                Hero::McGinnis => 1,
                Hero::Paradox => 2,
                Hero::Dynamo => 7,
                Hero::Kelvin => 6,
                Hero::Haze => 1,
                Hero::Holliday => 15, 
                Hero::Bebop => 14,
                Hero::Calico => 15, 
                Hero::GreyTalon => 7,
                Hero::MoAndKrill => 4,
                Hero::Shiv => 7,
                Hero::Ivy => 7,
                Hero::Viper => 15, 
                Hero::Warden => 5,
                Hero::Yamato => 6,
                Hero::Lash => 6,
                Hero::Viscous => 1,
                Hero::Wrecker => 19, 
                Hero::Pocket =>  7,
                Hero::Mirage => 2,
                Hero::Fathom => 15, 
                Hero::Dummy => 6,
                Hero::Magician => 17, 
                Hero::Trapper => 15,
            }
        }
        else if *self == TargetBone::Chest { // SPINE_3
            return match hero {
                Hero::None => 0,
                Hero::Infernus => 11,
                Hero::Seven => 11,
                Hero::Vindicta => 5,
                Hero::LadyGeist => 9,
                Hero::Abrams => 5,
                Hero::Wraith => 5,
                Hero::McGinnis => 5,
                Hero::Paradox => 6,
                Hero::Dynamo => 7,
                Hero::Kelvin => 10,
                Hero::Haze => 5,
                Hero::Holliday => 2, 
                Hero::Bebop => 4,
                Hero::Calico => 2,
                Hero::GreyTalon => 15,
                Hero::MoAndKrill => 8, // 23
                Hero::Shiv => 11,
                Hero::Ivy => 11,
                Hero::Viper => 2, 
                Hero::Warden => 9,
                Hero::Yamato => 18,
                Hero::Lash => 10,
                Hero::Viscous => 5,
                Hero::Wrecker => 2,
                Hero::Pocket =>  11,
                Hero::Mirage => 6,
                Hero::Fathom => 2, 
                Hero::Dummy => 10,
                Hero::Magician => 2, 
                Hero::Trapper => 2,
            }
        }
        0
    }
}

#[derive(Debug)]
#[derive(PartialEq, Eq)]
#[derive(Clone, Copy)]
pub enum Hero
{
    None = 0,
    Infernus = 1,
    Seven = 2,
    Vindicta = 3,
    LadyGeist = 4,
    Abrams = 6,
    Wraith = 7,
    McGinnis = 8,
    Paradox = 10,
    Dynamo = 11,
    Kelvin = 12,
    Haze = 13,
    Holliday = 14,
    Bebop = 15,
    Calico = 16,
    GreyTalon = 17,
    MoAndKrill = 18,
    Shiv = 19,
    Ivy = 20,
    Viper = 21,
    Warden = 25,
    Yamato = 27,
    Lash = 31,
    Viscous = 35,
    Wrecker = 48,
    Pocket = 50,
    Mirage = 52,
    Fathom = 53,
    Dummy = 55,
    Magician = 60,
    Trapper = 61
  
}

impl std::fmt::Display for Hero {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:?}", self)
    }
}

impl Default for Hero
{
    fn default() -> Self {
        Hero::None
    }
}

impl Hero
{
    /// Возвращает индекс кости игрока
    pub fn get_head_bone(self) -> Option<i32>
    {
        match self {
            Hero::Infernus => Some(30),
            Hero::Seven => Some(14),
            Hero::Vindicta => Some(7),
            Hero::LadyGeist => Some(11),
            Hero::Abrams => Some(7),
            Hero::Wraith => Some(7),
            Hero::McGinnis => Some(7),
            Hero::Paradox => Some(8),
            Hero::Dynamo => Some(13),
            Hero::Kelvin => Some(12),
            Hero::Haze => Some(7),
            Hero::Holliday => Some(6), // -1
            Hero::Bebop => Some(6),
            Hero::Calico => Some(12),
            Hero::GreyTalon => Some(17),
            Hero::MoAndKrill => Some(25), // 10
            Hero::Shiv => Some(13),
            Hero::Ivy => Some(13),
            Hero::Viper => Some(6),
            Hero::Warden => Some(11),
            Hero::Yamato => Some(33),
            Hero::Lash => Some(12),
            Hero::Viscous => Some(7),
            Hero::Wrecker => Some(7), //-1
            Hero::Pocket => Some(13),
            Hero::Mirage => Some(8),
            Hero::Fathom => Some(12),
            Hero::Dummy => Some(34),
            Hero::Magician => Some(12),
            Hero::Trapper => Some(12),
            _ => None
        }
    }

    pub fn get_icon(self) -> ImageSource<'static> {
        return match self {
            Hero::None => egui::include_image!("../../../icons/None.png"),
            Hero::Infernus => egui::include_image!("../../../icons/Infernus.png"),
            Hero::Seven => egui::include_image!("../../../icons/Seven.png"),
            Hero::Vindicta => egui::include_image!("../../../icons/Vindicta.png"),
            Hero::LadyGeist => egui::include_image!("../../../icons/LadyGeist.png"),
            Hero::Abrams => egui::include_image!("../../../icons/Abrams.png"),
            Hero::Wraith => egui::include_image!("../../../icons/Wraith.png"),
            Hero::McGinnis => egui::include_image!("../../../icons/McGinnis.png"),
            Hero::Paradox => egui::include_image!("../../../icons/Paradox.png"),
            Hero::Dynamo => egui::include_image!("../../../icons/Dynamo.png"),
            Hero::Kelvin => egui::include_image!("../../../icons/Kelvin.png"),
            Hero::Haze => egui::include_image!("../../../icons/Haze.png"),
            // Hero::Holliday => egui::include_image!("../../../icons/None.png"),
            Hero::Bebop => egui::include_image!("../../../icons/Bebop.png"),
            Hero::GreyTalon => egui::include_image!("../../../icons/GreyTalon.png"),
            Hero::MoAndKrill => egui::include_image!("../../../icons/MoAndKrill.png"),
            Hero::Shiv => egui::include_image!("../../../icons/Shiv.png"),
            Hero::Ivy => egui::include_image!("../../../icons/Ivy.png"),
            Hero::Warden => egui::include_image!("../../../icons/Warden.png"),
            Hero::Yamato => egui::include_image!("../../../icons/Yamato.png"),
            Hero::Lash => egui::include_image!("../../../icons/Lash.png"),
            Hero::Viscous => egui::include_image!("../../../icons/Viscous.png"),
            // Hero::Wrecker => egui::include_image!("../../../icons/None.png"),
            Hero::Pocket => egui::include_image!("../../../icons/Pocket.png"),
            Hero::Mirage => egui::include_image!("../../../icons/Mirage.png"),
            Hero::Dummy => egui::include_image!("../../../icons/None.png"),
            // Hero::Calico => egui::include_image!("../../../icons/None.png"),
            // Hero::Fathom => egui::include_image!("../../../icons/None.png"),
            // Hero::Magician => egui::include_image!("../../../icons/None.png"),
            // Hero::Trapper => egui::include_image!("../../../icons/None.png"),
            // Hero::Viper => egui::include_image!("../../../icons/None.png"),
            _ => egui::include_image!("../../../icons/None.png")
        };
    }
}

impl TryFrom<i32> for Hero
{
    type Error = ();

    fn try_from(value: i32) -> Result<Self, Self::Error> {
        match value {
            1 => Ok(Hero::Infernus),
            2 => Ok(Hero::Seven),
            3 => Ok(Hero::Vindicta),
            4 => Ok(Hero::LadyGeist),
            6 => Ok(Hero::Abrams),
            7 => Ok(Hero::Wraith),
            8 => Ok(Hero::McGinnis),
            10 => Ok(Hero::Paradox),
            11 => Ok(Hero::Dynamo),
            12 => Ok(Hero::Kelvin),
            13 => Ok(Hero::Haze),
            14 => Ok(Hero::Holliday),
            15 => Ok(Hero::Bebop),
            16 => Ok(Hero::Calico),
            17 => Ok(Hero::GreyTalon),
            18 => Ok(Hero::MoAndKrill),
            19 => Ok(Hero::Shiv),
            20 => Ok(Hero::Ivy),
            21 => Ok(Hero::Viper),
            25 => Ok(Hero::Warden),
            27 => Ok(Hero::Yamato),
            31 => Ok(Hero::Lash),
            35 => Ok(Hero::Viscous),
            48 => Ok(Hero::Wrecker),
            50 => Ok(Hero::Pocket),
            52 => Ok(Hero::Mirage),
            53 => Ok(Hero::Fathom),
            55 => Ok(Hero::Dummy),
            58 => Ok(Hero::Viper),
            60 => Ok(Hero::Magician),
            61 => Ok(Hero::Trapper),
            _ => {
                // log::error!("Unknown hero id: {}", value);
                Err(())
            }
        }
    }
}

#[derive(PartialEq, Eq)]
#[derive(Clone, Copy)]
pub enum EntityType
{
    None,
    Soul,
    Creep
}

impl EntityType
{
    ///name - 7 байт
    pub fn from_class_name(name: Vec<u8>) -> Option<EntityType>
    {
        let designer_name = String::from_utf8(name).unwrap_or_default();
        if designer_name == "item_xp"
        {
            Some(Self::Soul)
        }
        else if designer_name == "npc_tro"
        {
            Some(Self::Creep)
        }
        else
        {
            None
        }
    }

    pub fn as_priority(self) -> u8
    {
        match self {
            EntityType::None => 0,
            EntityType::Creep => 1,
            EntityType::Soul => 2,
        }
    }

    pub fn as_priority_2(self, priority: Priority) -> u8
    {
        if priority == Priority::Souls{
            match self {
                EntityType::None => 0,
                EntityType::Creep => 1,
                EntityType::Soul => 2,
            }
        } else {
            match self {
                EntityType::None => 0,
                EntityType::Creep => 2,
                EntityType::Soul => 1,
            }
        }
    }
}

#[derive(Debug)]
#[derive(PartialEq)]
#[derive(Clone, Copy)]
#[repr(u16)]
pub enum AbilitySlot {
    ESlot_Invalid = 0xffff,
    ESlot_Signature_1 = 0x0,            // Абилки
    ESlot_Signature_2 = 0x1,
    ESlot_Signature_3 = 0x2,
    ESlot_Signature_4 = 0x3,
    ESlot_ActiveItem_1 = 0x4,           // Шмотки?
    ESlot_ActiveItem_2 = 0x5,
    ESlot_ActiveItem_3 = 0x6,
    ESlot_ActiveItem_4 = 0x7,
    ESlot_Ability_Held = 0x8,
    ESlot_Ability_ZipLine = 0x9,
    ESlot_Ability_Mantle = 0xa,
    ESlot_Ability_ClimbRope = 0xb,
    ESlot_Ability_Jump = 0xc,
    ESlot_Ability_Slide = 0xd,
    ESlot_Ability_Teleport = 0xe,
    ESlot_Ability_ZipLineBoost = 0xf,
    ESlot_Ability_Innate_1 = 0x10,
    ESlot_Ability_Innate_2 = 0x11,
    ESlot_Ability_Innate_3 = 0x12,
    ESlot_Weapon_Secondary = 0x13,
    ESlot_Weapon_Primary = 0x14,
    ESlot_Weapon_Melee = 0x15,
    ESlot_None = 0x16, // EMaxAbilitySlots
}

#[derive(Debug)]
#[derive(PartialEq)]
#[derive(Clone, Copy)]
#[repr(u8)]
pub enum EJumpType {
    EJumpType_Ground = 0,
    EJumpType_Air = 1,
    EJumpType_Wall = 2,
    EJumpType_DashJump = 3,
}
