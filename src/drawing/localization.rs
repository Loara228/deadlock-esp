#[derive(Clone, Copy)]
#[derive(PartialEq, Eq)]
#[derive(Debug)]
pub enum Lang {
    RU,
    EN,
    CH
}

impl Lang {
    pub fn config(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG,
            Lang::EN => en::CONFIG,
            Lang::CH => ch::CONFIG,
        }
    }
    
    pub fn config_load(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_LOAD,
            Lang::EN => en::CONFIG_LOAD,
            Lang::CH => ch::CONFIG_LOAD,
        }
    }
    
    pub fn config_save(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_SAVE,
            Lang::EN => en::CONFIG_SAVE,
            Lang::CH => ch::CONFIG_SAVE,
        }
    }
    
    pub fn config_default(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_DEFAULT,
            Lang::EN => en::CONFIG_DEFAULT,
            Lang::CH => ch::CONFIG_DEFAULT,
        }
    }
    
    pub fn repository(self) -> &'static str {
        match self {
            Lang::RU => ru::REPOSITORY,
            Lang::EN => en::REPOSITORY,
            Lang::CH => ch::REPOSITORY,
        }
    }
    
    pub fn close(self) -> &'static str {
        match self {
            Lang::RU => ru::CLOSE,
            Lang::EN => en::CLOSE,
            Lang::CH => ch::CLOSE,
        }
    }
    
    pub fn aim_not_calibrated(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_NOT_CALIBRATED,
            Lang::EN => en::AIM_NOT_CALIBRATED,
            Lang::CH => ch::AIM_NOT_CALIBRATED,
        }
    }
    
    pub fn aim_calibrate(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_CALIBRATE,
            Lang::EN => en::AIM_CALIBRATE,
            Lang::CH => ch::AIM_CALIBRATE,
        }
    }
    
    pub fn aim_players(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_PLAYERS,
            Lang::EN => en::AIM_PLAYERS,
            Lang::CH => ch::AIM_PLAYERS,
        }
    }
    
    pub fn aim_creeps(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_CREEPS,
            Lang::EN => en::AIM_CREEPS,
            Lang::CH => ch::AIM_CREEPS,
        }
    }
    
    pub fn aim_enable(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_ENABLE,
            Lang::EN => en::AIM_ENABLE,
            Lang::CH => ch::AIM_ENABLE,
        }
    }
    
    pub fn aim_velocity_prediction(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_VELOCITY_PREDICTION,
            Lang::EN => en::AIM_VELOCITY_PREDICTION,
            Lang::CH => ch::AIM_VELOCITY_PREDICTION,
        }
    }
    
    pub fn aim_rcs(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_RCS,
            Lang::EN => en::AIM_RCS,
            Lang::CH => ch::AIM_RCS,
        }
    }
    
    pub fn aim_targeting(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_TARGETING,
            Lang::EN => en::AIM_TARGETING,
            Lang::CH => ch::AIM_TARGETING,
        }
    }
    
    pub fn aim_fov_color(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_FOV_COLOR,
            Lang::EN => en::AIM_FOV_COLOR,
            Lang::CH => ch::AIM_FOV_COLOR,
        }
    }
    
    pub fn aim_fov(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_FOV,
            Lang::EN => en::AIM_FOV,
            Lang::CH => ch::AIM_FOV,
        }
    }
    
    pub fn aim_smooth(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_SMOOTH,
            Lang::EN => en::AIM_SMOOTH,
            Lang::CH => ch::AIM_SMOOTH,
        }
    }
    
    pub fn aim_max_distance(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_MAX_DISTANCE,
            Lang::EN => en::AIM_MAX_DISTANCE,
            Lang::CH => ch::AIM_MAX_DISTANCE,
        }
    }
    
    pub fn aim_distance_m(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_CREEPS,
            Lang::EN => en::AIM_CREEPS,
            Lang::CH => ch::AIM_CREEPS,
        }
    }
    
    pub fn aim_meters(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_METERS,
            Lang::EN => en::AIM_METERS,
            Lang::CH => ch::AIM_METERS,
        }
    }
}

pub(super) mod ru
{
    pub const CONFIG: &str = "Настройки";
    pub const CONFIG_LOAD: &str = "Загрузить настройки";
    pub const CONFIG_SAVE: &str = "Сохранить настройки";
    pub const CONFIG_DEFAULT: &str = "Загрузить стандартные настройки";
    pub const REPOSITORY: &str = "Репозиторий (исходный код и обновления)";
    pub const CLOSE: &str = "Закрыть";

    pub const AIM_NOT_CALIBRATED: &str = "АИМ НЕ ОТКАЛИБРОВАН";
    pub const AIM_CALIBRATE: &str = "Откалибровать";
    pub const AIM_PLAYERS: &str = "Игроки";
    pub const AIM_CREEPS: &str = "Крипы и души";
    pub const AIM_ENABLE: &str = "Включить помощь в наведении";
    pub const AIM_VELOCITY_PREDICTION: &str = "Учитывать ускорение";
    pub const AIM_RCS: &str = "Контролировать отдачу";
    pub const AIM_TARGETING: &str = "Захват только одной цели";
    pub const AIM_FOV_COLOR: &str = "Цвет FOV";
    pub const AIM_FOV: &str = "FOV";
    pub const AIM_SMOOTH: &str = "Плавность";
    pub const AIM_MAX_DISTANCE: &str = "Максимальная дистанция";
    pub const AIM_METERS: &str = "метров";
}

// Burger
pub(super) mod en
{
    pub const CONFIG: &str = "Config";
    pub const CONFIG_LOAD: &str = "Load config";
    pub const CONFIG_SAVE: &str = "Save config";
    pub const CONFIG_DEFAULT: &str = "Load default config";
    pub const REPOSITORY: &str = "Repository (source code & updates)";
    pub const CLOSE: &str = "Close";
    
    pub const AIM_NOT_CALIBRATED: &str = "AIM NOT CALIBRATED";
    pub const AIM_CALIBRATE: &str = "Calibrate";
    pub const AIM_PLAYERS: &str = "Players";
    pub const AIM_CREEPS: &str = "Creeps and souls";
    pub const AIM_ENABLE: &str = "Enable aim assist";
    pub const AIM_VELOCITY_PREDICTION: &str = "Velocity prediction";
    pub const AIM_RCS: &str = "RCS";
    pub const AIM_TARGETING: &str = "Only one target";
    pub const AIM_FOV_COLOR: &str = "FOV color";
    pub const AIM_FOV: &str = "FOV";
    pub const AIM_SMOOTH: &str = "Smooth";
    pub const AIM_MAX_DISTANCE: &str = "Maximum distance";
    pub const AIM_METERS: &str = "meters";
}

// Китайская порция риса и кошка-жена
pub (super) mod ch
{
    pub const CONFIG: &str = "习近平";
    pub const CONFIG_LOAD: &str = "习近平";
    pub const CONFIG_SAVE: &str = "习近平";
    pub const CONFIG_DEFAULT: &str = "习近平";
    pub const REPOSITORY: &str = "习近平";
    pub const CLOSE: &str = "习近平";
    
    pub const AIM_NOT_CALIBRATED: &str = "AIM NOT CALIBRATED";
    pub const AIM_CALIBRATE: &str = "Calibrate";
    pub const AIM_PLAYERS: &str = "Players";
    pub const AIM_CREEPS: &str = "Creeps and souls";
    pub const AIM_ENABLE: &str = "Enable aim assist";
    pub const AIM_VELOCITY_PREDICTION: &str = "Velocity prediction";
    pub const AIM_RCS: &str = "RCS";
    pub const AIM_TARGETING: &str = "Only one target";
    pub const AIM_FOV_COLOR: &str = "FOV color";
    pub const AIM_FOV: &str = "FOV";
    pub const AIM_SMOOTH: &str = "Smooth";
    pub const AIM_MAX_DISTANCE: &str = "Maximum distance";
    pub const AIM_METERS: &str = "meters";
}