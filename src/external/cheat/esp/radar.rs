use egui::Color32;

use crate::settings::RadarSettings;

pub fn draw_radar(g: &egui::Painter, settings: &RadarSettings)
{
    g.rect_filled(settings.rect, egui::Rounding::default(), Color32::RED);
}