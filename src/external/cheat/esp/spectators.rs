use crate::external::interfaces::structs::Observers;

pub fn draw_window(observers: &Observers, ctx: &egui::Context)
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
            for p_name in observers.spectator_list.iter() {
                ui.label(p_name);
            }
    });
}