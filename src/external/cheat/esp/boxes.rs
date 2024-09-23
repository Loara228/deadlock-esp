use egui::{epaint::RectShape, Pos2, Rect, Rounding, Stroke};
use crate::{external::interfaces::{entities::Player, math::Matrix}, settings::{structs::BoxType, structs::Settings}};

pub fn draw_boxes(rect: Rect, g: &egui::Painter, settings: &Settings)
{
    let rounding = get_rounding(rect, settings);

    if settings.esp_players.shadow
    {
        let size = settings.esp_players.shadow_size;
        let r1 = egui::Rect { min: Pos2 { x: rect.min.x - size, y: rect.min.y - size }, max: Pos2 { x: rect.min.x + size, y: rect.max.y + size } };
        let r2 = egui::Rect { min: Pos2 { x: rect.max.x - size, y: rect.min.y - size }, max: Pos2 { x: rect.max.x + size, y: rect.max.y + size } };
        let r3 = egui::Rect { min: Pos2 { x: rect.min.x - size, y: rect.max.y - size }, max: Pos2 { x: rect.max.x + size, y: rect.max.y + size } };
        let r4 = egui::Rect { min: Pos2 { x: rect.min.x - size, y: rect.min.y - size }, max: Pos2 { x: rect.max.x + size, y: rect.min.y + size } };
        g.add(RectShape::filled(r1, egui::Rounding::default(), settings.esp_players.shadow_color).with_blur_width(settings.esp_players.shadow_blur));
        g.add(RectShape::filled(r2, egui::Rounding::default(), settings.esp_players.shadow_color).with_blur_width(settings.esp_players.shadow_blur));
        g.add(RectShape::filled(r3, egui::Rounding::default(), settings.esp_players.shadow_color).with_blur_width(settings.esp_players.shadow_blur));
        g.add(RectShape::filled(r4, egui::Rounding::default(), settings.esp_players.shadow_color).with_blur_width(settings.esp_players.shadow_blur));
    }

    if settings.esp_players.fill_rect
    {
        g.rect_filled(rect, rounding, settings.esp_players.fill_color);
    }

    if settings.esp_players.outline_rect
    {
        let stroke = Stroke::new(settings.esp_players.stroke_width, settings.esp_players.outline_color);
        if settings.esp_players.box_type == BoxType::Edges
        {
            draw_edges(rect, g, stroke);
        }
        else
        {
            g.rect_stroke(rect, rounding, stroke);
        }
    }
}

pub fn draw_head(g: &egui::Painter, player: &Player, settings: &Settings, matrix: &Matrix)
{
    let mut pos = player.skeleton.head_pos.clone();
    if matrix.transform(&mut pos)
    {
        let l = player.rect.width() / 6.;
        let rect = Rect {
            min: Pos2 { x: pos.x - l, y: pos.y - l },
            max: Pos2 { x: pos.x + l, y: pos.y + l },
        };
        g.add(RectShape::filled(rect, egui::Rounding::same(l / 2.), settings.esp_players.glow_color).with_blur_width(l / 1.2));
    }
}

fn draw_edges(rect: Rect, g: &egui::Painter, stroke: Stroke)
{
    let length = (rect.width() + rect.height()) / 2. * 0.2;
            
    let mut first = Pos2::new(rect.left(), rect.top());
    let mut second = Pos2::new(rect.left(), rect.top() + length);
    let mut third = Pos2::new(rect.left() + length, rect.top());

    let height = rect.height();
    let width = rect.width();
    let top = rect.top();
    let left = rect.left();

    g.line_segment([first, second], stroke);
    g.line_segment([first, third], stroke);
    
    first.y += height;
    second.y = first.y - length;
    third.y = first.y;
    third.x = first.x + length;
    
    g.line_segment([first, second], stroke);
    g.line_segment([first, third], stroke);
    
    first.x = left + width;
    first.y = top;
    second.x = first.x - length;
    second.y = first.y;
    third.x = first.x;
    third.y = first.y + length;
    
    g.line_segment([first, second], stroke);
    g.line_segment([first, third], stroke);
    
    first.y += height;
    second.x += length;
    second.y = first.y - length;
    third.y = first.y;
    third.x = first.x - length;
    
    g.line_segment([first, second], stroke);
    g.line_segment([first, third], stroke);
}

fn get_rounding(rect: Rect, settings: &Settings) -> Rounding
{
    match settings.esp_players.box_type
    {
        crate::settings::structs::BoxType::Default => 
        {
            Rounding { nw: 0., ne: 0., sw: 0., se: 0. }
        },
        crate::settings::structs::BoxType::Rounded => 
        {
            let r = rect.width() / 10.;
            Rounding { nw: r, ne: r, sw: r, se: r }
        },
        crate::settings::structs::BoxType::Edges => 
        {
            Rounding { nw: 0., ne: 0., sw: 0., se: 0. }
        },
        // _ => 
        // {
        //     log::error!("Unknown box type");
        //     todo!();
        // },
    }
}