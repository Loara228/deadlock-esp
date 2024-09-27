use egui::{Context, Ui};
use esp::aim_element;
use windows::Win32::UI::WindowsAndMessaging::SetForegroundWindow;

use crate::{external::cheat::aim, settings::mgr};
use super::overlay::Overlay;

pub fn draw_windows(overlay: &mut Overlay, ctx: &Context, ui: &mut Ui) {
    draw_main(overlay, ctx, ui);
    draw_esp(overlay, ctx, ui);
    draw_radar(overlay, ctx, ui);
    draw_aim(overlay, ctx, ui);
}

fn draw_main(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("main")
        .resizable(false)
        .collapsible(false)
        .show(ctx, |ui| {
            ui.label("config");
            ui.separator();
            if ui.button("load default").clicked() {
                mgr::change(&mut overlay.settings, "default.cjson");
            }
            ui.horizontal(|ui| {
                if ui.button("load").clicked() {
                    mgr::change(&mut overlay.settings, "current.cjson");
                }
                if ui.button("save").clicked() {
                    mgr::save(&mut overlay.settings, "current.cjson");
                }
            });
            ui.collapsing("current settings", |ui| {
                ui.label(format!("{:?}", overlay.settings));
            });
            ui.separator();
            if ui.button("close").clicked() {
                std::process::exit(0);
            }
        });
}

fn draw_aim(overlay: &mut Overlay, ctx: &Context, ui: &mut Ui) {
    egui::Window::new("aim")
        .resizable(false).show(ctx, |ui| {
            if overlay.settings.aim.angle_per_pixel == 0f32
            {
                ui.label(egui::RichText::new("АИМ НЕ ОТКАЛИБРОВАН!!!").color(egui::Color32::RED));
            }
            if ui.button("Калибровать").clicked() {
                unsafe { SetForegroundWindow(overlay.game_hwnd).unwrap(); }
                overlay.settings.aim.angle_per_pixel = aim::aiming::calibrate(&mut overlay.game);
                if overlay.settings.aim.angle_per_pixel.is_nan()
                {
                    overlay.settings.aim.angle_per_pixel = 0f32;
                }
            }
            ui.label("Игроки");
            ui.group(|ui| {
                aim_element(ui, &mut overlay.settings.aim, false);
            });
            ui.label("Крипы и сферы (души)");
            ui.group(|ui| {
                aim_element(ui, &mut overlay.settings.aim, true);
            });

        ui.horizontal(|ui|
            {
                ui.color_edit_button_srgba(&mut overlay.settings.aim.soul_color);
                ui.label("Цвет сфер (душ)");
            });
            ui.horizontal(|ui|
            {
                ui.color_edit_button_srgba(&mut overlay.settings.aim.creep_color);
                ui.label("Цвет крипов");
            });
        });
}

fn draw_radar(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    let window = egui::Window::new("ESP");
    window
        .resizable(true)
        .min_size(egui::Vec2 { x: 100., y: 100. })
        .vscroll(true)
        .hscroll(true)
        .max_size(egui::Vec2 { x: 500., y: 500. })
        .title_bar(false)
        .default_size(overlay.settings.radar.rect.size())
        .show(ctx, |ui| {
            overlay.settings.radar.rect = ui.available_rect_before_wrap();
        });
}

fn draw_esp(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("Отрисовка")
        .resizable(false)
        .default_width(500.)
        .show(ctx, |ui| {
            esp::esp_players(ui, overlay);
            esp::esp_boxes(ui, overlay);
            esp::esp_radar(ui, overlay);
            esp::esp_text(ui, overlay);
        });
}

mod esp {
    use crate::{
        drawing::overlay::Overlay,
        settings::structs::*,
    };
    use egui::{Align2, Ui};


    pub fn esp_text(ui: &mut Ui, overlay: &mut Overlay) {
        ui.collapsing("Надписи", |ui| {
            ui.collapsing("Имя персонжа", |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_hero, "ui_text_1");
            });
            ui.collapsing("Здоровье", |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_health, "ui_text_2");
            });
            ui.collapsing("Дистанция", |ui| {
                ui_text(ui, &mut overlay.settings.esp_players.text_distance, "ui_text_3");
            });
        });
    }
    
    pub fn esp_radar(ui: &mut Ui, overlay: &mut Overlay)
    {
        ui.collapsing("Радар", |ui| {
            egui::Grid::new("radar_grid")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    ui.checkbox(&mut overlay.settings.radar.enable, "enable");
                    ui.label("Отрисовка радара на экране");
                    ui.end_row();
                    ui.add(
                        egui::Slider::new(&mut overlay.settings.radar.player_radius, 1.0..=8.0)
                            .show_value(true)
                    );
                    ui.label("Радиус точки игрока");
                    ui.end_row();
                    ui.add(
                        egui::Slider::new(&mut overlay.settings.radar.scale, 10.0..=50.0)
                            .show_value(true)
                    );
                    ui.label("Маштаб радара");
                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_enemy);
                    ui.label("Цвет врага");

                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_team);
                    ui.label("Цвет союзника");
                    ui.end_row();
                    

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_background);
                    ui.label("Цвет фона");

                    ui.end_row();

                    ui.color_edit_button_srgba(&mut overlay.settings.radar.color_border);
                    ui.label("Цвет обводки");
                    ui.end_row();
                })
        });
    }

    pub fn esp_players(ui: &mut Ui, overlay: &mut Overlay) {
        ui.collapsing("Прямоугольники", |ui| {
            ui.checkbox(&mut overlay.settings.esp_players.render, "Включить");
            egui::Grid::new("esp_grid")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    egui::ComboBox::from_id_source("esp_boxtype")
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

                    ui.label("Стиль отрисовки");
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, "stroke");
                    ui.label("Обводка");
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.fill_rect, "fill");
                    ui.label("Заливка");
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.glow, "glow");
                    ui.label("Свечение головы игрока");
                    ui.end_row();

                    ui.checkbox(&mut overlay.settings.esp_players.shadow, "shadow");
                    ui.label("Тень обводки");
                    ui.end_row();
                });
                
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.stroke_width, 1.0..=4.0)
                    .show_value(true)
                    .text("Толщина линий"),
            );
            ui.end_row();
            
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.shadow_size, 4.0..=18.0)
                    .show_value(true)
                    .text("Размер тени"),
            );
            ui.end_row();
            
            ui.add(
                egui::Slider::new(&mut overlay.settings.esp_players.shadow_blur, 1.0..=100.)
                    .show_value(true)
                    .text("Размытие тени"),
            );
            ui.end_row();
            
            egui::Grid::new("esp_grid 2")
                .num_columns(2)
                .min_col_width(150.)
                .max_col_width(150.)
                .show(ui, |ui| {
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.outline_color);
                        ui.label("stroke");
                    });
                    ui.label("Обводка");
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.fill_color);
                        ui.label("fill");
                    });
                    ui.label("Заливка");
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.glow_color);
                        ui.label("glow");
                    });
                    ui.label("Подсветка");
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.shadow_color);
                        ui.label("shadow");
                    });
                    ui.label("Тень обводки");
                    ui.end_row();
                });
        });
    }

    pub fn esp_boxes(ui: &mut Ui, overlay: &mut Overlay) {
        ui.collapsing("Здоровье", |ui| {
            ui.checkbox(&mut overlay.settings.healthbars.enable, "Включить");
            egui::Grid::new("healthbars_grid")
            .num_columns(2)
            .min_col_width(150.)
            .max_col_width(150.)
            .show(ui, |ui| {
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.background_color);
                ui.label("Цвет заднего фона");
                ui.end_row();
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.hp_color);
                ui.label("Цвет здоровья");
                ui.end_row();
                ui.color_edit_button_srgba(&mut overlay.settings.healthbars.outline_color);
                ui.label("Цвет обводки");
                ui.end_row();
            });
        });
    }

    /// UI блок для ESP TEXT
    fn ui_text(ui: &mut Ui, settings: &mut TextSettings, id: &str) {
        fn to_string(align: Align2) -> String {
            if align == Align2::CENTER_TOP {
                return "Сверху".to_owned();
            } else if align == Align2::LEFT_TOP {
                return "Левый верхний угол".to_owned();
            } else if align == Align2::RIGHT_TOP {
                return "Правый верхний угол".to_owned();
            } else if align == Align2::CENTER_BOTTOM {
                return "Снизу".to_owned();
            }
            "?".to_owned()
        }

        ui.checkbox(&mut settings.enable, "Включить");
        ui.horizontal(|ui| {
            ui.color_edit_button_srgba(&mut settings.font_color);
            ui.checkbox(&mut settings.shadow, "Контрастный");
        });
        ui.add(
            egui::Slider::new(&mut settings.font_size, 6.0..=24.0)
                .show_value(true)
                .text("Размер шрифта"),
        );

        egui::ComboBox::from_id_source(id)
            .selected_text(format!("{}", to_string(settings.align)))
            .show_ui(ui, |ui| {
                ui.selectable_value(&mut settings.align, Align2::CENTER_TOP, "Сверху");
                ui.selectable_value(&mut settings.align, Align2::LEFT_TOP, "Левый верхний угол");
                ui.selectable_value(
                    &mut settings.align,
                    Align2::RIGHT_TOP,
                    "Правый верхний угол",
                );
                ui.selectable_value(&mut settings.align, Align2::CENTER_BOTTOM, "Снизу");
            });
    }

    pub fn aim_element(ui: &mut Ui, global_aim_settings: &mut AimSettings, entities: bool)
    {
        let settings: &mut AimProperties = match entities {
            true => &mut global_aim_settings.creeps,
            false => &mut global_aim_settings.players,
        };
        ui.checkbox(&mut settings.enable, "Помощь в наведении");
        ui.checkbox(&mut settings.velocity_prediction, "Учитывать ускорение");
        ui.checkbox(&mut settings.rcs, "Контроль отдачи");
        ui.checkbox(&mut settings.targeting, "Захват цели");
        ui.horizontal(|ui| {
            ui.color_edit_button_srgba(&mut settings.color);
            ui.label("Цвет FOV");
        });
        ui.add(
            egui::Slider::new(&mut settings.fov, 20.0..=800.0).show_value(true).text("FOV")
        );
        ui.add(
            egui::Slider::new(&mut settings.smooth, 1.25..=10.0).show_value(true).text("Плавность")
        );
        ui.add(
            egui::Slider::new(&mut settings.velocity_div_dav, 1f32..=50.0).show_value(true).text("Делитель учета ускорения")
        );
        ui.horizontal(|ui| {
            ui.add(
                egui::Slider::new(&mut settings.range, 200.0..=5000.0).show_value(true).text("Максимальная дистанция")
            );
            ui.label(format!("{} метров", settings.range * 0.0254f32))
        });
    }

}