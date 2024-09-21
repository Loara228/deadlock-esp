use egui::Pos2;

pub fn draw(g: &egui::Painter) {
    g.text(
        Pos2 { x: 0f32, y: 0f32 },
        egui::Align2::CENTER_CENTER,
        "test",
        egui::FontId::default(),
        egui::Color32::WHITE,
    );
}
