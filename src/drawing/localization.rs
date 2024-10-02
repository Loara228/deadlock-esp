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
}

pub(super) mod ru
{
    pub const CONFIG: &str = "Настройки";
    pub const CONFIG_LOAD: &str = "Загрузить настройки";
    pub const CONFIG_SAVE: &str = "Сохранить настройки";
    pub const CONFIG_DEFAULT: &str = "Загрузить стандартные настройки";
    pub const REPOSITORY: &str = "Репозиторий (исходный код и обновления)";
    pub const CLOSE: &str = "Закрыть";
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
}

// China number one
pub (super) mod ch
{
    pub const CONFIG: &str = "习近平";
    pub const CONFIG_LOAD: &str = "习近平";
    pub const CONFIG_SAVE: &str = "习近平";
    pub const CONFIG_DEFAULT: &str = "习近平";
    pub const REPOSITORY: &str = "习近平";
    pub const CLOSE: &str = "习近平";
}