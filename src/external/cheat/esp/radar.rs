use crate::{
    external::{interfaces::entities::Player, External},
    settings::RadarSettings,
};
use egui::{Pos2, Rect};

pub fn draw_radar(g: &egui::Painter, settings: &RadarSettings, game: &External) {
    if game.local_player_index == 0 || !settings.enable {
        return;
    }
    let mut rounding = egui::Rounding::same(8.);
    rounding.nw = 0.;
    rounding.ne = 0.;
    let stroke = egui::Stroke::new(1., settings.color_border);
    g.rect_filled(settings.rect, rounding, settings.color_background);

    for player in game.players.iter() {
        if player.is_alive() {
            let local_player: &Player = &game.players[game.local_player_index - 1];
            draw_player(
                g,
                player,
                local_player,
                settings,
                game.camera.view_angles.y - 90.,
            );
        }
    }

    g.line_segment([settings.rect.center(), settings.rect.left_top()], stroke);
    g.line_segment([settings.rect.center(), settings.rect.right_top()], stroke);
    g.rect_stroke(settings.rect, rounding, stroke);
}

fn draw_player(
    g: &egui::Painter,
    player: &Player,
    local_player: &Player,
    settings: &RadarSettings,
    angle: f32,
) {
    let center = settings.rect.center();
    let enemy = player.pawn.team != local_player.pawn.team;
    let mut pos = Pos2::new(
        local_player.game_scene_node.position.x - player.game_scene_node.position.x,
        local_player.game_scene_node.position.y - player.game_scene_node.position.y,
    );
    pos.x /= settings.scale;
    pos.y /= settings.scale;
    pos.x *= -1.;
    pos.x += center.x;
    pos.y += center.y;

    let radar_pos = transform(pos, center, settings.rect, angle);
    let color = match enemy {
        true => settings.color_enemy,
        false => settings.color_team,
    };
    g.circle_filled(radar_pos, settings.player_radius, color);
}

fn transform(point_to_rotate: Pos2, center: Pos2, radar_rect: Rect, angle: f32) -> Pos2 {
    let mut rotated_point = Pos2::default();
    let angle = angle * (3.1415926 / 180.);
    let cos_theta = angle.cos();
    let sin_theta = angle.sin();

    rotated_point.x = (cos_theta * (point_to_rotate.x - center.x)
        - sin_theta * (point_to_rotate.y - center.y))
        + center.x;
    rotated_point.y = (sin_theta * (point_to_rotate.x - center.x)
        + cos_theta * (point_to_rotate.y - center.y))
        + center.y;

    if rotated_point.x > radar_rect.left() + radar_rect.width() {
        rotated_point.x = radar_rect.left() + radar_rect.width();
    }

    if rotated_point.y > radar_rect.top() + radar_rect.height() {
        rotated_point.y = radar_rect.top() + radar_rect.height();
    }

    if rotated_point.x < radar_rect.left() {
        rotated_point.x = radar_rect.left();
    }

    if rotated_point.y < radar_rect.top() {
        rotated_point.y = radar_rect.top();
    }
    rotated_point
}
