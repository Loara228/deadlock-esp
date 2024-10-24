use std::{io::Read, path::PathBuf};

use egui::{Context, FontData, FontDefinitions, Ui};
use egui_notify::Toasts;
use windows::Win32::UI::{Input::KeyboardAndMouse::GetAsyncKeyState, WindowsAndMessaging::SetForegroundWindow};

use crate::{external::{cheat::aim, interfaces::enums::{Hero, TargetBone}}, input::keyboard::{Key, VirtualKeys}, settings::{self, mgr, structs::{AimProperties, AimSettings, Priority}}};
use super::{localization::Lang, overlay::Overlay};

pub fn draw_windows(overlay: &mut Overlay, ctx: &Context, ui: &mut Ui) {
    draw_main(overlay, ctx, ui);
    draw_esp(overlay, ctx, ui);
    draw_aim(overlay, ctx, ui);
    draw_scripts(overlay, ctx, ui);
}

fn draw_scripts(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("Scripts").auto_sized().max_height(250f32).show(ctx, |ui| {
        egui::ScrollArea::vertical().auto_shrink(true).show(ui, |ui| {
            egui::Grid::new("script_grid").num_columns(1).min_col_width(200f32).max_col_width(200f32).show(ui, |ui| {
                for s in overlay.hero_scripts.iter_mut() {
                    let script = s.0.lock().unwrap();
                    let script_settings = &mut s.1;
    
                    ui.group(|ui| {
                        ui.vertical(|ui| {
                            let hero = script.hero_id();
                            if hero == Hero::None {
                                ui.label(format!("Hero: Any"));
                            }
                            else {
                                ui.label(format!("Hero: {:?}", hero));
                            }
                            ui.label(format!("Name: {}", script.name()));
                            ui.checkbox(&mut script_settings.enabled, overlay.lang.enable());
                            if script_settings.key.is_some() {
                                ui.label(format!("{:?}", script_settings.key));
                            }
                            ui.horizontal(|ui| {
                                ui.add_space(200f32);
                            });
                        });
                    });
                    ui.end_row();
                }
            });
        });
        ui.horizontal(|ui| {
            
            if ui.button("включить всё").clicked() {
                for s in overlay.hero_scripts.iter_mut() {
                    s.1.enabled = true;
                }
            }
            if ui.button("выключить всё").clicked() {
                for s in overlay.hero_scripts.iter_mut() {
                    s.1.enabled = false;
                }
            }
        });
    });
}

fn draw_config(overlay: &mut Overlay, ui: &mut Ui) {
    ui.label(overlay.lang.config());
    ui.horizontal(|ui| {
        let mut btn_text = overlay.lang.config_create();
        ui.add(egui::TextEdit::singleline(&mut overlay.current_config).desired_width(100f32).hint_text("default"));
        if overlay.configs.contains(&overlay.current_config)
        {
            btn_text = overlay.lang.config_save();
        }
        if ui.button(btn_text).clicked() {
            let mut conf_name = overlay.current_config.to_owned();
            conf_name.push_str(".cjson");
            mgr::save(&mut overlay.settings, &conf_name);
            overlay.toasts.info(overlay.lang.config_saved());
            overlay.configs = settings::mgr::get_configs();
        }
    });
    let mut deleted = false;
    for c in overlay.configs.iter() {
        ui.horizontal(|ui| {
            ui.group(|ui| {
                if ui.button(overlay.lang.config_load()).clicked() {
                    let mut conf_name = c.to_owned();
                    conf_name.push_str(".cjson");
                    if mgr::change(&mut overlay.settings, &conf_name) {
                        overlay.toasts.info(overlay.lang.config_loaded());
                    } else {
                        overlay.toasts.error(overlay.lang.config_failed());
                    }
                }
                if ui.button(overlay.lang.config_delete()).clicked() {
                    let mut conf_name = c.to_owned();
                    conf_name.push_str(".cjson");
                    mgr::delete(&conf_name);
                    deleted = true;
                    overlay.toasts.info(overlay.lang.config_deleted());
                }
                ui.add_space(10f32);
                ui.label(c);
            });
        });
    }
    // if ui.button(overlay.lang.config_default()).clicked() {
    //     overlay.settings = Settings::default();
    // }
    if deleted {
        overlay.configs = settings::mgr::get_configs();
    }
    ui.separator();
}

fn draw_main(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("Main")
        .resizable(false)
        .collapsible(false)
        .show(ctx, |ui| {
            ui.separator();
            ui.label("Language");
            egui::ComboBox::from_id_salt("lang_selector")
                        .selected_text(format!("{:?}", overlay.lang))
                        .show_ui(ui, |ui| {
                            ui.selectable_value(
                                &mut overlay.lang,
                                Lang::RU,
                                "Русский",
                            );
                            ui.selectable_value(
                                &mut overlay.lang,
                                Lang::EN,
                                "English",
                            );
                            if ui.selectable_value(
                                &mut overlay.lang,
                                Lang::ZhCn,
                                "Chinese",
                            ).clicked() {
                                if !overlay.font_loaded {
                                    load_font(ctx);
                                    overlay.font_loaded = true;
                                }
                            };
                            if ui.selectable_value(
                                &mut overlay.lang,
                                Lang::ZhTw,
                                "Chinese (Taiwan)",
                            ).clicked() {
                                if !overlay.font_loaded {
                                    load_font(ctx);
                                    overlay.font_loaded = true;
                                }
                            };
                        });

            ui.separator();
            draw_config(overlay, ui);
            ui.hyperlink_to(overlay.lang.repository(), "https://github.com/Loara228/deadlock-esp");
            ui.separator();
            if ui.button(overlay.lang.close()).clicked() {
                crate::exit();
            }
        });
}

fn draw_aim(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("Aim")
        .resizable(false).show(ctx, |ui| {
            if overlay.settings.aim.angle_per_pixel == 0f32
            {
                ui.label(egui::RichText::new(overlay.lang.aim_not_calibrated()).color(egui::Color32::RED));
            }
            if ui.button(overlay.lang.aim_calibrate()).clicked() {
                unsafe { SetForegroundWindow(overlay.game_hwnd).unwrap(); }
                overlay.settings.aim.angle_per_pixel = aim::aiming::calibrate(&mut overlay.game);
                if overlay.settings.aim.angle_per_pixel.is_nan()
                {
                    overlay.settings.aim.angle_per_pixel = 0f32;
                }
                unsafe { SetForegroundWindow(overlay.overlay_hwnd).unwrap(); }
            }

            ui.collapsing(overlay.lang.aim_players(), |ui| {
                aim_element(ui, &mut overlay.settings.aim, false, &overlay.lang, &mut overlay.toasts);
            });
            ui.collapsing(overlay.lang.aim_creeps(), |ui| {
                aim_element(ui, &mut overlay.settings.aim, true, &overlay.lang, &mut overlay.toasts);
            });
        }
    );
}

fn draw_esp(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("ESP")
        .resizable(false)
        .default_width(500.)
        .show(ctx, |ui| {
            esp::esp_players(ui, overlay);
            esp::esp_healthbar(ui, overlay);
            esp::esp_offscreen(ui, overlay);
            esp::esp_radar(ui, overlay);
            esp::esp_text(ui, overlay);
        });
}

fn load_font(ctx: &Context) {
    let mut fonts = FontDefinitions::default();
    let fonts_path = system_font_dir().unwrap().join("msyh.ttc");

    let mut file = std::fs::File::open(fonts_path.clone()).unwrap();
    let mut font_data = Vec::new();
    file.read_to_end(&mut font_data).unwrap();
    
    let font_data: &'static [u8] = Box::leak(font_data.into_boxed_slice()); 
    fonts.font_data.insert(
        "my_font".to_owned(),
        FontData::from_static(font_data),
    );

    fonts.families.entry(egui::FontFamily::Proportional).or_default().insert(0, "my_font".to_owned());
    fonts.families.entry(egui::FontFamily::Monospace).or_default().push("my_font".to_owned());

    ctx.set_fonts(fonts);
    log::info!("Font loaded: {:?}", fonts_path);
}

fn system_font_dir() -> Option<PathBuf> {
    std::env::var_os("windir").and_then(|x| {
        let path = PathBuf::from(x).join("Fonts");
        if path.is_dir() {
            Some(path)
        } else {
            None
        }
    })
}

pub fn aim_element(ui: &mut Ui, global_aim_settings: &mut AimSettings, entities: bool, lang: &Lang, toasts: &mut Toasts)
{
    let settings: &mut AimProperties = match entities {
        true => &mut global_aim_settings.creeps,
        false => &mut global_aim_settings.players,
    };
    if !entities {
        egui::ComboBox::from_id_salt("aim_bone")
                        .selected_text(format!("{} {:?}", lang.bone(), global_aim_settings.aim_bone))
                        .show_ui(ui, |ui| {
                            if ui.selectable_value(
                                &mut global_aim_settings.aim_bone,
                                TargetBone::Head,
                                lang.bone_head(),
                            ).changed() {
                                toasts.error("If hit only in the head. You can be turned into a frog and banned!");
                                toasts.error("If hit only in the head. You can be turned into a frog and banned!");
                                toasts.error("If hit only in the head. You can be turned into a frog and banned!");
                            }
                            if ui.selectable_value(
                                &mut global_aim_settings.aim_bone,
                                TargetBone::Neck,
                                lang.bone_neck(),
                            ).changed() {
                                toasts.warning("There is a very small chance of a ban. (1%)");
                            }
                            ui.selectable_value(
                                &mut global_aim_settings.aim_bone,
                                TargetBone::Chest,
                                lang.bone_chest(),
                            );
                            ui.selectable_value(
                                &mut global_aim_settings.aim_bone,
                                TargetBone::Pelvis,
                                lang.bone_pelvis(),
                            );
                        });
    } else {
        ui.horizontal(|ui| {
            ui.radio_value(&mut global_aim_settings.priority, Priority::Souls, lang.souls());
            ui.radio_value(&mut global_aim_settings.priority, Priority::Creeps, lang.creeps());
        });
    }

    btn_read_key(ui, &mut settings.key, lang);

    ui.checkbox(&mut settings.enable, lang.aim_enable());
    ui.checkbox(&mut settings.velocity_prediction, lang.aim_velocity_prediction());
    ui.checkbox(&mut settings.rcs, lang.aim_rcs());
    ui.checkbox(&mut settings.targeting, lang.aim_targeting());
    ui.horizontal(|ui| {
        ui.color_edit_button_srgba(&mut settings.color);
        ui.label(lang.aim_fov_color());
    });
    if entities {
        ui.horizontal(|ui|
            {
                ui.color_edit_button_srgba(&mut global_aim_settings.soul_color);
                ui.label(lang.color());
            });}
    ui.add(
        egui::Slider::new(&mut settings.fov, 20.0..=800.0).show_value(true).text(lang.aim_fov())
    );
    ui.add(
        egui::Slider::new(&mut settings.smooth, 1.1..=10.0).show_value(true).text(lang.aim_smooth())
    );
    ui.add(
        egui::Slider::new(&mut settings.velocity_div_dav, 1f32..=30.0).show_value(true).text(lang.aim_velocity_prediction())
    );
    ui.horizontal(|ui| {
        ui.add(
            egui::Slider::new(&mut settings.range, 200.0..=5000.0).show_value(true).text(lang.aim_max_distance())
        );
        ui.label(format!("{} ({})", (settings.range * 0.0254f32).round(), lang.aim_meters()))
    });
}

fn btn_read_key(ui: &mut Ui, key_bind: &mut Key, lang: &Lang) {
    ui.horizontal(|ui| {
        if ui.button(lang.select_key()).clicked()
        {
            loop {
                std::thread::sleep(std::time::Duration::from_millis(25));
                unsafe {
                    for key in VirtualKeys::get_keys().iter() {
                        if GetAsyncKeyState(*key as i32) < 0 {
                            key_bind.code = *key as i32;
                            log::info!("selected key: {}", key_bind.code);
                            return;
                        }
                    }
                }
            }
        }
        ui.label(format!("{:?}", key_bind));
    });
}

mod esp {
    use crate::{
        drawing::{localization::Lang, overlay::Overlay},
        settings::structs::*,
    };
    use egui::{Align2, Ui};


    pub fn esp_text(ui: &mut Ui, overlay: &mut Overlay) {
        ui.collapsing(overlay.lang.esp_text(), |ui| {
            ui.collapsing(overlay.lang.esp_text_hero_name(), |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_hero, "ui_text_1", &overlay.lang);
            });
            ui.collapsing(overlay.lang.esp_text_health(), |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_health, "ui_text_2", &overlay.lang);
            });
            ui.collapsing(overlay.lang.esp_text_distance(), |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_distance, "ui_text_3", &overlay.lang);
            });
        });
    }
    
    pub fn esp_radar(ui: &mut Ui, overlay: &mut Overlay)
    {
        ui.collapsing(overlay.lang.esp_radar(), |ui| {
            egui::Grid::new("radar_grid")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    ui.checkbox(&mut overlay.settings.radar.enable, overlay.lang.esp_radar());
                    ui.label(overlay.lang.enable());
                    ui.end_row();

                    if ui.add(egui::RadioButton::new(overlay.settings.radar.icons == false, "Стрелки")).clicked() {
                        overlay.settings.radar.icons = false;
                    }
                    if ui.add(egui::RadioButton::new(overlay.settings.radar.icons == true, "Иконки")).clicked() {
                        overlay.settings.radar.icons = true;
                    }
                    ui.end_row();

                    ui.add(
                        egui::Slider::new(&mut overlay.settings.radar.player_radius, 1.0..=8.0)
                            .show_value(true)
                    );
                    ui.label(overlay.lang.esp_radar_radius());
                    ui.end_row();
                    ui.add(
                        egui::Slider::new(&mut overlay.settings.radar.scale, 10.0..=50.0)
                            .show_value(true)
                    );
                    ui.label(overlay.lang.esp_radar_scale());
                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_enemy);
                    ui.label(overlay.lang.esp_radar_color_enemy());

                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_team);
                    ui.label(overlay.lang.esp_radar_color_teammate());
                    ui.end_row();
                    

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_background);
                    ui.label(overlay.lang.esp_radar_color_bg());

                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_border);
                    ui.label(overlay.lang.esp_radar_color_stroke());
                    ui.end_row();
                    
                    // icons
                    ui.add(
                        egui::Slider::new(&mut overlay.settings.radar.icon_size, 10.0..=40.0)
                            .show_value(true)
                    );
                    ui.label(overlay.lang.esp_radar_icon_size());
                    ui.end_row();
                })
        });
    }

    pub fn esp_players(ui: &mut Ui, overlay: &mut Overlay) {
        let lang = overlay.lang;
        ui.checkbox(&mut overlay.settings.esp_players.render, "Render players");
        ui.collapsing(lang.esp_players_rect(), |ui| {
            egui::Grid::new("esp_grid")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    egui::ComboBox::from_id_salt("esp_boxtype")
                        .selected_text(format!("{:?}", overlay.settings.esp_players.box_type))
                        .show_ui(ui, |ui| {
                            ui.selectable_value(
                                &mut overlay.settings.esp_players.box_type,
                                BoxType::Default,
                                "Default",
                            );
                            ui.selectable_value(
                                &mut overlay.settings.esp_players.box_type,
                                BoxType::Rounded,
                                "Rounded",
                            );
                            ui.selectable_value(
                                &mut overlay.settings.esp_players.box_type,
                                BoxType::Edges,
                                "Edges",
                            );
                        });

                    ui.label(lang.esp_players_rect_type());
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, lang.enable());
                    ui.label(lang.esp_players_rect_stroke());
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.fill_rect, lang.enable());
                    ui.label(lang.esp_players_rect_fill());
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.shadow, lang.enable());
                    ui.label(lang.esp_players_rect_shadow());
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.glow, lang.enable());
                    ui.label(lang.esp_players_rect_head());
                    ui.end_row();
                });
                
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.stroke_width, 1.0..=4.0)
                    .show_value(true)
                    .text(lang.esp_players_rect_stroke_value()),
            );
            ui.end_row();
            
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.shadow_size, 1.0..=30.0)
                    .show_value(true)
                    .text(lang.esp_players_rect_shadow_value()),
            );
            ui.end_row();
            
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.shadow_blur, 1.0..=15.)
                    .show_value(true)
                    .text(lang.esp_players_rect_shadow_blur_value()),
            );
            ui.end_row();
            
            egui::Grid::new("esp_grid 2")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.outline_color);
                        ui.label(lang.color());
                    });
                    ui.label(lang.esp_players_rect_stroke());
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.fill_color);
                        ui.label(lang.color());
                    });
                    ui.label(lang.esp_players_rect_fill());
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.glow_color);
                        ui.label(lang.color());
                    });
                    ui.label(lang.esp_players_rect_head());
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.shadow_color);
                        ui.label(lang.color());
                    });
                    ui.label(lang.esp_players_rect_shadow());
                    ui.end_row();
                });
        });
    }

    pub fn esp_offscreen(ui: &mut Ui, overlay: &mut Overlay) {
        let lang = &overlay.lang;
        ui.collapsing("offscreen", |ui| {
            egui::Grid::new("offscreen_grid")
            .num_columns(2)
            .min_col_width(150.)
            .max_col_width(150.)
            .show(ui, |ui| {
                ui.checkbox(&mut overlay.settings.offscreen.enable, lang.enable());
                ui.end_row();
                
                ui.add(
                    egui::Slider::new(&mut overlay.settings.offscreen.radius, 50f32..=500f32)
                        .show_value(true)
                        .text("radius"),
                );

                ui.end_row();

                ui.checkbox(&mut overlay.settings.offscreen.enable_rect, "rectangle");
                ui.label(lang.enable());
                ui.end_row();

                ui.color_edit_button_srgba(&mut overlay.settings.offscreen.rect_color);
                ui.label("rect color");
                ui.end_row();

                ui.checkbox(&mut overlay.settings.offscreen.enable_icon, "icon");
                ui.label(lang.enable());
                ui.end_row();

                ui.add(
                    egui::Slider::new(&mut overlay.settings.offscreen.icon_size, 15f32..=50f32)
                        .show_value(true)
                        .text("icon size"),
                );
                ui.end_row();

                ui.checkbox(&mut overlay.settings.offscreen.enable_health, "healthbar");
                ui.label(lang.enable());
                ui.end_row();

                ui.checkbox(&mut overlay.settings.offscreen.enable_distance, "distance");
                ui.label(lang.enable());
                ui.end_row();
            });
        });
    }

    pub fn esp_healthbar(ui: &mut Ui, overlay: &mut Overlay) {
        let lang = &overlay.lang;
        ui.collapsing(lang.esp_healthbar(), |ui| {
            ui.checkbox(&mut overlay.settings.healthbars.enable, lang.enable());
            egui::Grid::new("healthbars_grid")
            .num_columns(2)
            .min_col_width(150.)
            .max_col_width(150.)
            .show(ui, |ui| {
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.background_color);
                ui.label(lang.esp_healthbar_bg());
                ui.end_row();
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.hp_color);
                ui.label(lang.esp_healthbar_value());
                ui.end_row();
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.outline_color);
                ui.label(lang.esp_healthbar_stroke());
                ui.end_row();
            });
        });
    }

    /// UI блок для ESP TEXT
    fn ui_text(ui: &mut Ui, settings: &mut TextSettings, id: &str, lang: &Lang) {
        fn to_string(align: Align2, lang: &Lang) -> &str {
            if align == Align2::CENTER_TOP {
                return lang.align_top();
            } else if align == Align2::LEFT_TOP {
                return lang.align_left();
            } else if align == Align2::RIGHT_TOP {
                return lang.align_right();
            } else if align == Align2::CENTER_BOTTOM {
                return lang.align_bottom();
            }
            panic!("ui_text unknown align");
        }

        ui.checkbox(&mut settings.enable, lang.enable());
        ui.horizontal(|ui| {
            ui.color_edit_button_srgba(&mut settings.font_color);
            ui.checkbox(&mut settings.shadow, lang.esp_text_shadow());
        });
        ui.add(
            egui::Slider::new(&mut settings.font_size, 6.0..=24.0)
                .show_value(true)
                .text(lang.esp_text_font_size()),
        );

        egui::ComboBox::from_id_salt(id)
            .selected_text(format!("{}", to_string(settings.align, lang)))
            .show_ui(ui, |ui| {
                ui.selectable_value(&mut settings.align, Align2::CENTER_TOP, lang.align_top());
                ui.selectable_value(&mut settings.align, Align2::LEFT_TOP, lang.align_left());
                ui.selectable_value(
                    &mut settings.align,
                    Align2::RIGHT_TOP,
                    lang.align_right(),
                );
                ui.selectable_value(&mut settings.align, Align2::CENTER_BOTTOM, lang.align_bottom());
            });
    }
}
