use egui::{epaint::RectShape, Pos2, Rect, Rounding, Stroke};
use crate::settings::{structs::BoxType, Settings};

pub fn draw_boxes(rect: Rect, g: &egui::Painter, settings: &Settings)
{
    let rounding = get_rounding(rect, settings);

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

    if settings.esp_players.glow
    {
        draw_glow(rect, g, rounding, settings);
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

fn draw_glow(rect: Rect, g: &egui::Painter, rounding: Rounding, settings: &Settings)
{
    let mut stroke = Stroke::default();
    stroke.width = rect.width() / 2.;
    let mut rect_shape = rect.clone();

    if rect_shape.left() <= 0.
    {
        rect_shape.set_left(0.);
    }
    if rect_shape.top() <= 0.
    {
        rect_shape.set_top(0.);
    }

    if rect_shape.right() >= g.ctx().screen_rect().right()
    {
        rect_shape.set_right(g.ctx().screen_rect().right());
    }
    if rect_shape.bottom() >= g.ctx().screen_rect().bottom()
    {
        rect_shape.set_bottom(g.ctx().screen_rect().bottom());
    }
    let shape = RectShape::filled(rect, rounding, settings.esp_players.glow_color).with_blur_width(settings.esp_players.glow_blur);
    g.add(shape);
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