pub mod structs;
use crate::input::keyboard::{Key, KeyState};
use egui::{Align2, Color32, Pos2};
use structs::{AimProperties, BoxType, EspPlayers, GlobalSettings, RadarSettings, TextSettings};

pub mod mgr
{
    use std::{fs::{create_dir, read_dir, remove_file, File}, io::{Read, Write}, path::PathBuf};

    use super::structs::Settings;

    pub fn initialize()
    {
        _ = get_path();
    }

    pub fn get_configs(path: PathBuf) 
    {
        let mut files: Vec<PathBuf> = Vec::new();
        for entry in read_dir(path).unwrap()
        {
            let entry = entry.unwrap();
            let file_path = entry.path();
            if file_path.is_file() && file_path.extension().unwrap_or_default() == "cjson"
            {
                files.push(file_path);
            }
        }
    }

    fn get_path() -> PathBuf
    {
        let path = std::env::current_dir().unwrap().join("configs");
        if !path.exists()
        {
            create_dir(path.clone()).unwrap();
            log::warn!("Created directory: {}", path.display());
            println!("{:?}", path.clone());
            save(&Settings::default(), "default.cjson");
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

    pub fn change(settings: &mut Settings, file_name: &str)
    {
        let path = get_path().join(file_name);
        if path.exists()
        {
            let mut file = File::open(path.clone()).unwrap();
            let mut data = String::new();
            file.read_to_string(&mut data).unwrap();
            *settings = serde_json::from_str(&data).unwrap_or(Settings::default());
            log::info!("Deserialized file: {:?}", path.display());
        }
        else
        {
            log::info!("File not found: {:?}", path.display());
        }
    }
}

impl Default for EspPlayers {
    fn default() -> Self {
        Self {
            stroke_width: 2f32,
            outline_color: Color32::from_rgba_unmultiplied(255, 0, 195, 200),
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
            shadow: false,
            shadow_color: Color32::from_rgba_unmultiplied(0, 0, 0, 30),
            shadow_size: 6.,
            shadow_blur: 40.
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

impl Default for TextSettings {
    fn default() -> Self {
        Self {
            enable: true,
            shadow: true,
            align: Align2::CENTER_BOTTOM,
            font_size: 14.,
            font_color: Color32::from_rgba_unmultiplied(180, 180, 180, 255),
        }
    }
}

impl Default for AimProperties
{
    fn default() -> Self {
        Self {
            enable: false,
            fov: 100.,
            smooth: 4f32,
            velocity_prediction: true,
            rcs: true,
            range: 1000.,
            key: Key { state: KeyState::None, code: 6 },
            targeting: true
        }
    }
}

impl Default for RadarSettings {
    fn default() -> Self {
        Self {
            enable: false,
            rect: egui::Rect {
                min: Pos2 { x: 0., y: 200. },
                max: Pos2 { x: 0., y: 200. },
            },
            color_background: Color32::from_rgba_unmultiplied(27, 27, 27, 200),
            color_border: Color32::from_rgba_unmultiplied(140, 140, 140, 255),
            player_radius: 3.,
            color_enemy: Color32::from_rgba_unmultiplied(234, 103, 109, 255),
            color_team: Color32::from_rgba_unmultiplied(75, 192, 117, 180),
            scale: 30.
        }
    }
}