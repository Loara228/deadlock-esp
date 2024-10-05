use crate::{drawing::localization::Lang, external::interfaces::structs::Observers, settings::structs::Settings};

pub fn draw_window(observers: &Observers, ctx: &egui::Context, settings: &mut Settings, lang: &Lang, ui_enabled: bool)
{   
    let window = egui::Window::new("Spectators");
    window
        .resizable(true)
        .min_size(egui::Vec2 { x: 50., y: 50. })
        .vscroll(true)
        .hscroll(true)
        .title_bar(true)
        .auto_sized()
        .default_size(egui::Vec2::new(150f32, 50f32))
        .show(ctx, |ui| {
            if ui_enabled {
                ui.checkbox(&mut settings.spectators, lang.enable());
            }
            for p_name in observers.spectator_list.iter() {
                ui.label(p_name);
            }
    });
}