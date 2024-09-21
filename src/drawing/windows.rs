use crate::settings::structs::BoxType;
use egui::{Context, Ui};

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
    egui::Window::new("ESP")
        .resizable(false)
        .default_width(500.)
        .show(ctx, |ui| {
            ui.checkbox(
                &mut overlay.settings.esp_players.render,
                "enable (rendering)",
            );
            ui.collapsing("Rectangles", |ui| {
                egui::Grid::new("esp_grid").num_columns(2).min_col_width(150.).show(ui, |ui| {
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
                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, "stroke");
                    ui.label("Обводки прямоугольника");
                    ui.end_row();
                    ui.checkbox(&mut overlay.settings.esp_players.fill_rect, "fill");
                    ui.label("Заливка прямоугольника");
                    ui.end_row();
                    ui.checkbox(&mut overlay.settings.esp_players.glow, "glow");
                    ui.label("Подсветка прямоугольника");
                    ui.end_row();
                });
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
                hr(ui);
                egui::Grid::new("esp_grid 2").num_columns(2).min_col_width(150.).show(ui, |ui| {
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.outline_color);
                        ui.label("stroke");
                    });
                    ui.label("Цвет обводки прямоугольника");
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.fill_color);
                        ui.label("fill");
                    });
                    ui.label("Цвет заливки прямоугольника");
                    ui.end_row();
                    ui.horizontal(|ui| {
                        ui.color_edit_button_srgba(&mut overlay.settings.esp_players.glow_color);
                        ui.label("glow");
                    });
                    ui.label("Цвет подсветки прямоугольника");
                    ui.end_row();
                    hr(ui);
                });
            })
            .fully_open();
            ui.collapsing("Text", |ui| {
                egui::Grid::new("esp_grid 3").num_columns(2).min_col_width(150.).show(ui, |ui| {
                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, "enable");
                })
            });
            ui.collapsing("Misc", |ui| {
                egui::Grid::new("esp_grid 4").num_columns(2).min_col_width(150.).show(ui, |ui| {
                    ui.checkbox(&mut overlay.settings.esp_players.outline_rect, "enable");
                })
            });
        });
}

fn hr(ui: &mut Ui) {
    ui.separator();
    ui.separator();
    ui.end_row();
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