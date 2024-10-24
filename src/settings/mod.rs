pub mod structs;
use crate::{external::interfaces::enums::TargetBone, input::keyboard::{Key, KeyState}};
use egui::{Align2, Color32, Pos2};
use structs::{AimProperties, AimSettings, BoxType, EspPlayers, GlobalSettings, HealthbarSettings, OffscreenSettings, RadarSettings, TextSettings};

pub mod mgr
{
    use std::{fs::{create_dir, read_dir, remove_file, File}, io::{Read, Write}, path::PathBuf};

    use super::structs::Settings;

    pub fn initialize()
    {
        _ = get_path();
    }

    pub fn get_configs()  -> Vec<String>
    {
        let path: PathBuf = get_path();
        let mut files: Vec<String> = Vec::new();
        for entry in read_dir(path).unwrap()
        {
            let entry = entry.unwrap();
            let file_path = entry.path();
            if file_path.is_file() && file_path.extension().unwrap_or_default() == "cjson"
            {
                files.push(file_path.file_name().unwrap().to_str().unwrap().to_owned().replace(".cjson", ""));
            }
        }
        files
    }

    fn get_path() -> PathBuf
    {
        let path = std::env::current_dir().unwrap().join("configs");
        if !path.exists()
        {
            create_dir(path.clone()).unwrap();
            log::warn!("Created directory: {}", path.display());
            println!("{:?}", path.clone());
        }
        path
    }

    pub fn save(settings: &Settings, file_name: &str)
    {
        let file_name = get_path().join(file_name);
        if file_name.exists()
        {
            remove_file(file_name.clone()).unwrap();
            log::info!("Deleted file: {:?}", file_name.clone());
        }
        let serialized = serde_json::to_string(settings).unwrap();
        let mut file = File::create(file_name.clone()).unwrap();
        file.write_all(serialized.as_bytes()).unwrap();

        log::info!("Created file: {:?}", file_name.display());
    }

    pub fn delete(file_name: &str) {
        let file_name = get_path().join(file_name);
        if file_name.exists()
        {
            remove_file(file_name.clone()).unwrap();
            log::info!("Deleted file: {:?}", file_name.clone());
        }
        else {
            log::warn!("File not found: {:?}", file_name);
        }
    }

    /// возвращает результат (успешно или нет)
    pub fn change(settings: &mut Settings, file_name: &str) -> bool
    {
        let path = get_path().join(file_name);
        if path.exists()
        {
            let mut file = File::open(path.clone()).unwrap();
            let mut data = String::new();
            file.read_to_string(&mut data).unwrap();
            let s: Result<Settings, serde_json::Error> = serde_json::from_str(&data);
            if s.is_err() {
                return false;
            }
            *settings = s.unwrap();
            // *settings = serde_json::from_str(&data).unwrap_or(Settings::default());
            log::info!("Deserialized file: {:?}", path.display());
            return true;
        }
        else
        {
            log::info!("File not found: {:?}", path.display());
        }
        return false;
    }
}

impl Default for EspPlayers {
    fn default() -> Self {
        Self {
            stroke_width: 1f32,
            outline_color: Color32::from_rgba_unmultiplied(210,229,0,150),
            fill_color: Color32::from_rgba_unmultiplied(0, 0, 0, 35),
            box_type: BoxType::Edges,
            outline_rect: true,
            fill_rect: false,
            render: true,
            glow: false,
            glow_color: Color32::from_rgba_unmultiplied(255, 51, 220, 27),
            text_hero: Default::default(),
            text_health: Default::default(),
            text_distance: Default::default(),
            shadow: true,
            shadow_color: Color32::from_rgba_unmultiplied(0, 0, 0, 30),
            shadow_size: 5.5f32,
            shadow_blur: 4f32
        }
    }
}

impl Default for GlobalSettings {
    fn default() -> Self {
        Self {
            key_overlay: Key::new(0x24),
        }
    }
}

impl Default for OffscreenSettings {
    fn default() -> Self {
        Self {
            enable: false,
            enable_icon: true,
            enable_health: true,
            enable_rect: false,
            enable_distance: true,
            rect_color: Color32::WHITE,
            radius: 200f32,
            icon_size: 25f32,
        }
   }
}

impl Default for TextSettings {
    fn default() -> Self {
        Self {
            enable: true,
            shadow: true,
            align: Align2::CENTER_BOTTOM,
            font_size: 12.5,
            font_color: Color32::from_rgba_unmultiplied(0, 255, 220, 255),
        }
    }
}

impl Default for AimProperties
{
    fn default() -> Self {
        Self {
            enable: true,
            fov: 350.,
            smooth: 1.25f32,
            velocity_prediction: true,
            rcs: true,
            range: 2200.,
            key: Key { state: KeyState::None, code: 6 },
            targeting: true,
            velocity_div_dav: 18f32,
            color: Color32::from_rgba_unmultiplied(255, 255, 255, 30),
        }
    }
}

impl Default for RadarSettings {
    fn default() -> Self {
        Self {
            enable: true,
            rect: egui::Rect {
                min: Pos2 { x: 0., y: 200. },
                max: Pos2 { x: 0., y: 200. },
            },
            color_background: Color32::from_rgba_unmultiplied(27, 27, 27, 200),
            color_border: Color32::from_rgba_unmultiplied(140, 140, 140, 255),
            player_radius: 3.,
            color_enemy: Color32::from_rgba_unmultiplied(234, 103, 109, 255),
            color_team: Color32::from_rgba_unmultiplied(75, 192, 117, 180),
            scale: 40.,
            icon_size: 20f32,
            icons: false
        }
    }
}

impl Default for HealthbarSettings
{
    fn default() -> Self {
        Self
        {
            background_color: Color32::from_rgba_unmultiplied(255, 0, 0, 200),
            outline_color: Color32::BLACK,
            hp_color: Color32::WHITE,
            enable: false,
        }
    }
}

impl Default for AimSettings
{
    
    fn default() -> Self {
        let players = AimProperties::default();
        let mut creeps = AimProperties::default();
        creeps.targeting = false;
        creeps.key.code = 5;
        creeps.fov += 10f32;
        Self
        {
            angle_per_pixel: 0f32,
            creep_color: Color32::RED,
            soul_color: Color32::from_rgba_unmultiplied(208,96,255,255),
            players,
            creeps,
            aim_bone: TargetBone::Neck,
            priority: structs::Priority::Souls
        }
    }
}