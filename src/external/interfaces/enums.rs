#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

use serde::{Deserialize, Serialize};

use super::math::Vector3;

#[derive(PartialEq)]
#[derive(Debug)]
#[derive(Serialize, Deserialize)]
pub enum TargetBone
{
    Head,
    Neck,
    Pelvis
}

impl TargetBone {
    pub fn get_bone_index(&self, hero: Hero) -> i32 {
        if *self == TargetBone::Neck {
            return match hero {
                Hero::None => 0,
                Hero::Infernus => 29,
                Hero::Seven => 12,
                Hero::Vindicta => 6,
                Hero::LadyGeist => 10,
                Hero::Abrams => 6,
                Hero::Wraith => 6,
                Hero::McGinnis => 6,
                Hero::Paradox => 7,
                Hero::Dynamo => 12,
                Hero::Kelvin => 11,
                Hero::Haze => 6,
                Hero::Holliday => todo!(),
                Hero::Bebop => 5,
                Hero::GreyTalon => 16,
                Hero::MoAndKrill => 9,
                Hero::Shiv => 12,
                Hero::Ivy => 12,
                Hero::Warden => 10,
                Hero::Yamato => 34,
                Hero::Lash => 11,
                Hero::Viscous => 6,
                Hero::Wrecker => todo!(),
                Hero::Pocket => 12,
                Hero::Mirage => 7,
                Hero::Dummy => 0,
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
                Hero::Holliday => todo!(),
                Hero::Bebop => 0,
                Hero::GreyTalon => 7,
                Hero::MoAndKrill => 4,
                Hero::Shiv => 7,
                Hero::Ivy => 7,
                Hero::Warden => 5,
                Hero::Yamato => 6,
                Hero::Lash => 6,
                Hero::Viscous => 1,
                Hero::Wrecker => todo!(),
                Hero::Pocket =>  7,
                Hero::Mirage => 2,
                Hero::Dummy => 0,
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
    Seven,
    Vindicta,
    LadyGeist,
    Abrams = 6,
    Wraith,
    McGinnis,
    Paradox = 10,
    Dynamo,
    Kelvin,
    Haze,
    Holliday,
    Bebop,
    GreyTalon = 17,
    MoAndKrill,
    Shiv,
    Ivy,
    Warden = 25,
    Yamato = 27,
    Lash = 31,
    Viscous = 35,
    Wrecker = 48,
    Pocket = 50,
    Mirage = 52,
    Dummy = 55
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
            Hero::LadyGeist => Some(0),
            Hero::Abrams => Some(7),
            Hero::Wraith => Some(7),
            Hero::McGinnis => Some(7),
            Hero::Paradox => Some(8),
            Hero::Dynamo => Some(13),
            Hero::Kelvin => Some(12),
            Hero::Haze => Some(7),
            Hero::Holliday => Some(0),
            Hero::Bebop => Some(6),
            Hero::GreyTalon => Some(17),
            Hero::MoAndKrill => Some(25), // 10
            Hero::Shiv => Some(13),
            Hero::Ivy => Some(13),
            Hero::Warden => Some(11),
            Hero::Yamato => Some(35),
            Hero::Lash => Some(12),
            Hero::Viscous => Some(7),
            Hero::Wrecker => Some(0),
            Hero::Pocket => Some(13),
            Hero::Mirage => Some(8),
            Hero::Dummy => Some(0),
            _ => None
        }
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
            17 => Ok(Hero::GreyTalon),
            18 => Ok(Hero::MoAndKrill),
            19 => Ok(Hero::Shiv),
            20 => Ok(Hero::Ivy),
            25 => Ok(Hero::Warden),
            27 => Ok(Hero::Yamato),
            31 => Ok(Hero::Lash),
            35 => Ok(Hero::Viscous),
            25 => Ok(Hero::Wrecker),
            50 => Ok(Hero::Pocket),
            52 => Ok(Hero::Mirage),
            55 => Ok(Hero::Dummy),
            _ => {
                log::warn!("unknown hero id: {}", value);
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
}