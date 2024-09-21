use crate::settings::{structs::BoxType, TextSettings};
use egui::{Align2, Context, Ui};

use super::overlay::Overlay;

pub fn draw_windows(overlay: &mut Overlay, ctx: &Context, ui: &mut Ui) {
    draw_main(overlay, ctx, ui);
    draw_esp(overlay, ctx, ui);
}

fn draw_main(_overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("main").resizable(false).show(ctx, |ui| {
        if ui.button("close").clicked() {
            std::process::exit(0);
        }
    });
}

fn draw_esp(overlay: &mut Overlay, ctx: &Context, _ui: &mut Ui) {
    egui::Window::new("ESP Игроки")
        .resizable(false)
        .default_width(500.)
        .show(ctx, |ui| {
            ui.checkbox(
                &mut overlay.settings.esp_players.render,
                "rendering",
            );
            ui.collapsing("Rectangles", |ui| {
                egui::Grid::new("esp_grid").num_columns(2).min_col_width(150.).max_col_width(150.).show(ui, |ui| {
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
                    hr(ui);
                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, "stroke"); // stroke
                    ui.label("Обводка");
                    ui.end_row();
                    ui.checkbox(&mut overlay.settings.esp_players.fill_rect, "fill"); // fill
                    ui.label("Заливка");
                    ui.end_row();
                    ui.checkbox(&mut overlay.settings.esp_players.glow, "glow"); // glow
                    ui.label("Подсветка");
                    ui.end_row();
                });
                hr2(ui, "1");
                ui.add(
                    egui::Slider::new(&mut overlay.settings.esp_players.stroke_width, 1.0..=4.0)
                        .show_value(true)
                        .text("Толщина линий"),
                );
                ui.end_row();
                ui.add(
                    egui::Slider::new(&mut overlay.settings.esp_players.glow_blur, 30.0..=100.0)
                        .show_value(true)
                        .text("Размытие"),
                );
                ui.end_row();
                hr2(ui, "2");
                egui::Grid::new("esp_grid 2").num_columns(2).min_col_width(150.).max_col_width(150.).show(ui, |ui| {
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
                    hr(ui);
                });
            })
            .fully_open();
            ui.collapsing("Text", |ui| {
                ui.collapsing("Text hero", |ui|
                {
                    ui_text(ui, &mut overlay.settings.esp_players.text_hero, "ui_text_1");
                });
                ui.collapsing("Text health", |ui|
                {
                    ui_text(ui, &mut overlay.settings.esp_players.text_health, "ui_text_2");
                });
            });
        });
}

fn hr(ui: &mut Ui) {
    ui.separator();
    ui.separator();
    ui.end_row();
}

fn hr2(ui: &mut Ui, id_name: &str)
{
    egui::Grid::new(id_name).num_columns(2).min_col_width(150.).max_col_width(150.).show(ui, |ui| {
        hr(ui);
    });
}

fn ui_text(ui: &mut Ui, settings: &mut TextSettings, id: &str)
{
    ui.checkbox(&mut settings.enable, "enable");
    ui.horizontal(|ui|
    {
        ui.color_edit_button_srgba(&mut settings.font_color);
        ui.checkbox(&mut settings.enable, "контрастный");
    });
    ui.add(
        egui::Slider::new(&mut settings.font_size, 6.0..=24.0)
            .show_value(true)
            .text("Размер шрифта"),
    );
    
    egui::ComboBox::from_id_source(id)
                        .selected_text(format!("{:?}", settings.align))
                        .show_ui(ui, |ui| {
                            ui.selectable_value(
                                &mut settings.align,
                                Align2::CENTER_TOP,
                                "Top",
                            );
                            ui.selectable_value(
                                &mut settings.align,
                                Align2::LEFT_TOP,
                                "Left",
                            );
                            ui.selectable_value(
                                &mut settings.align,
                                Align2::RIGHT_TOP,
                                "Right",
                            );
                            ui.selectable_value(
                                &mut settings.align,
                                Align2::CENTER_BOTTOM,
                                "Bottom",
                            );
                        });
}

// text
// {
// 	enable
// 	color
// 	shadow
// 	Hero name
// 	{
// 		enable
// 		anchor [enum] // так же позиция
// 		fontSize
// 	}
// 	Health/MaxHealth
// 	{
// 		enable
// 		anchor [enum] // так же позиция
// 		fontSize
// 	}
// }