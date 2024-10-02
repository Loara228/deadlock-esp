#[derive(Clone, Copy)]
#[derive(PartialEq, Eq)]
#[derive(Debug)]
pub enum Lang {
    RU,
    EN,
    ZH-CN,
    ZH-TW
}

impl Lang {
    
    pub fn enable(self) -> &'static str {
        match self {
            Lang::RU => ru::ENABLE,
            Lang::EN => en::ENABLE,
			Lang::ZH-CN => zhcn::,
			Lang::ZH-TW => zhtw::,
        }
    }
    
    pub fn color(self) -> &'static str {
        match self {
            Lang::RU => ru::COLOR,
            Lang::EN => en::COLOR,
			Lang::ZH-CN => zhcn::COLOR,
			Lang::ZH-TW => zhtw::COLOR,
        }
    }

    pub fn config(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG,
            Lang::EN => en::CONFIG,
			Lang::ZH-CN => zhcn::CONFIG,
			Lang::ZH-TW => zhtw::CONFIG,
        }
    }
    
    pub fn config_load(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_LOAD,
            Lang::EN => en::CONFIG_LOAD,
			Lang::ZH-CN => zhcn::CONFIG_LOAD,
			Lang::ZH-TW => zhtw::CONFIG_LOAD,
        }
    }
    
    pub fn config_save(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_SAVE,
            Lang::EN => en::CONFIG_SAVE,
			Lang::ZH-CN => zhcn::CONFIG_SAVE,
			Lang::ZH-TW => zhtw::CONFIG_SAVE,
        }
    }
    
    pub fn config_default(self) -> &'static str {
        match self {
            Lang::RU => ru::CONFIG_DEFAULT,
            Lang::EN => en::CONFIG_DEFAULT,
			Lang::ZH-CN => zhcn::CONFIG_DEFAULT,
			Lang::ZH-TW => zhtw::CONFIG_DEFAULT,
        }
    }
    
    pub fn repository(self) -> &'static str {
        match self {
            Lang::RU => ru::REPOSITORY,
            Lang::EN => en::REPOSITORY,
			Lang::ZH-CN => zhcn::REPOSITORY,
			Lang::ZH-TW => zhtw::REPOSITORY,
        }
    }
    
    pub fn close(self) -> &'static str {
        match self {
            Lang::RU => ru::CLOSE,
            Lang::EN => en::CLOSE,
			Lang::ZH-CN => zhcn::CLOSE,
			Lang::ZH-TW => zhtw::CLOSE,
        }
    }
    
    pub fn aim_not_calibrated(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_NOT_CALIBRATED,
            Lang::EN => en::AIM_NOT_CALIBRATED,
			Lang::ZH-CN => zhcn::AIM_NOT_CALIBRATED,
			Lang::ZH-TW => zhtw::AIM_NOT_CALIBRATED,
        }
    }
    
    pub fn aim_calibrate(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_CALIBRATE,
            Lang::EN => en::AIM_CALIBRATE,
			Lang::ZH-CN => zhcn::AIM_CALIBRATE,
			Lang::ZH-TW => zhtw::AIM_CALIBRATE,
        }
    }
    
    pub fn aim_players(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_PLAYERS,
            Lang::EN => en::AIM_PLAYERS,
			Lang::ZH-CN => zhcn::AIM_PLAYERS,
			Lang::ZH-TW => zhtw::AIM_PLAYERS,
        }
    }
    
    pub fn aim_creeps(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_CREEPS,
            Lang::EN => en::AIM_CREEPS,
			Lang::ZH-CN => zhcn::AIM_CREEPS,
			Lang::ZH-TW => zhtw::AIM_CREEPS,
        }
    }
    
    pub fn aim_enable(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_ENABLE,
            Lang::EN => en::AIM_ENABLE,
			Lang::ZH-CN => zhcn::AIM_ENABLE,
			Lang::ZH-TW => zhtw::AIM_ENABLE,
        }
    }
    
    pub fn aim_velocity_prediction(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_VELOCITY_PREDICTION,
            Lang::EN => en::AIM_VELOCITY_PREDICTION,
			Lang::ZH-CN => zhcn::AIM_VELOCITY_PREDICTION,
			Lang::ZH-TW => zhtw::AIM_VELOCITY_PREDICTION,
        }
    }
    
    pub fn aim_rcs(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_RCS,
            Lang::EN => en::AIM_RCS,
			Lang::ZH-CN => zhcn::AIM_RCS,
			Lang::ZH-TW => zhtw::AIM_RCS,
        }
    }
    
    pub fn aim_targeting(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_TARGETING,
            Lang::EN => en::AIM_TARGETING,
			Lang::ZH-CN => zhcn::AIM_TARGETING,
			Lang::ZH-TW => zhtw::AIM_TARGETING,
        }
    }
    
    pub fn aim_fov_color(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_FOV_COLOR,
            Lang::EN => en::AIM_FOV_COLOR,
			Lang::ZH-CN => zhcn::AIM_FOV_COLOR,
			Lang::ZH-TW => zhtw::AIM_FOV_COLOR,
        }
    }
    
    pub fn aim_fov(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_FOV,
            Lang::EN => en::AIM_FOV,
			Lang::ZH-CN => zhcn::AIM_FOV,
			Lang::ZH-TW => zhtw::AIM_FOV,
        }
    }
    
    pub fn aim_smooth(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_SMOOTH,
            Lang::EN => en::AIM_SMOOTH,
			Lang::ZH-CN => zhcn::AIM_SMOOTH,
			Lang::ZH-TW => zhtw::AIM_SMOOTH,
        }
    }
    
    pub fn aim_max_distance(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_MAX_DISTANCE,
            Lang::EN => en::AIM_MAX_DISTANCE,
			Lang::ZH-CN => zhcn::AIM_MAX_DISTANCE,
			Lang::ZH-TW => zhtw::AIM_MAX_DISTANCE,
        }
    }
    
    pub fn aim_meters(self) -> &'static str {
        match self {
            Lang::RU => ru::AIM_METERS,
            Lang::EN => en::AIM_METERS,
			Lang::ZH-CN => zhcn::AIM_METERS,
			Lang::ZH-TW => zhtw::AIM_METERS,
        }
    }
    
    pub fn esp_players_rect(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE,
        }
    }
    
    pub fn esp_players_rect_type(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_TYPE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_TYPE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_TYPE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_TYPE,
        }
    }
    
    pub fn esp_players_rect_stroke(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_STROKE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_STROKE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_STROKE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_STROKE,
        }
    }
    
    pub fn esp_players_rect_fill(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_FILL,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_FILL,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_FILL,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_FILL,
        }
    }
    
    pub fn esp_players_rect_shadow(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_SHADOW,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_SHADOW,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_SHADOW,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_SHADOW,
        }
    }
    
    pub fn esp_players_rect_head(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_HEAD,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_HEAD,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_HEAD,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_HEAD,
        }
    }
    
    pub fn esp_players_rect_stroke_value(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_STROKE_VALUE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_STROKE_VALUE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_STROKE_VALUE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_STROKE_VALUE,
        }
    }
    
    pub fn esp_players_rect_shadow_value(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_SHADOW_VALUE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_SHADOW_VALUE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_SHADOW_VALUE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_SHADOW_VALUE,
        }
    }
    
    pub fn esp_players_rect_shadow_blur_value(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE,
            Lang::EN => en::ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE,
			Lang::ZH-CN => zhcn::ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE,
			Lang::ZH-TW => zhtw::ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE,
        }
    }
    
    pub fn esp_healthbar(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_HEALTHBAR,
            Lang::EN => en::ESP_HEALTHBAR,
			Lang::ZH-CN => zhcn::ESP_HEALTHBAR,
			Lang::ZH-TW => zhtw::ESP_HEALTHBAR,
        }
    }
    
    pub fn esp_healthbar_bg(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_HEALTHBAR_BACKGROUND,
            Lang::EN => en::ESP_HEALTHBAR_BACKGROUND,
			Lang::ZH-CN => zhcn::ESP_HEALTHBAR_BACKGROUND,
			Lang::ZH-TW => zhtw::ESP_HEALTHBAR_BACKGROUND,
        }
    }
    
    pub fn esp_healthbar_value(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_HEALTHBAR_HEALTH,
            Lang::EN => en::ESP_HEALTHBAR_HEALTH,
			Lang::ZH-CN => zhcn::ESP_HEALTHBAR_HEALTH,
			Lang::ZH-TW => zhtw::ESP_HEALTHBAR_HEALTH,
        }
    }
    
    pub fn esp_healthbar_stroke(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_HEALTHBAR_STROKE,
            Lang::EN => en::ESP_HEALTHBAR_STROKE,
			Lang::ZH-CN => zhcn::ESP_HEALTHBAR_STROKE,
			Lang::ZH-TW => zhtw::ESP_HEALTHBAR_STROKE,
        }
    }
    
    pub fn align_top(self) -> &'static str {
        match self {
            Lang::RU => ru::ALIGN_TOP,
            Lang::EN => en::ALIGN_TOP,
			Lang::ZH-CN => zhcn::ALIGN_TOP,
			Lang::ZH-TW => zhtw::ALIGN_TOP,
        }
    }
    
    pub fn align_left(self) -> &'static str {
        match self {
            Lang::RU => ru::ALIGN_TOP_LEFT,
            Lang::EN => en::ALIGN_TOP_LEFT,
			Lang::ZH-CN => zhcn::ALIGN_TOP_LEFT,
			Lang::ZH-TW => zhtw::ALIGN_TOP_LEFT,
        }
    }
    
    pub fn align_right(self) -> &'static str {
        match self {
            Lang::RU => ru::ALIGN_TOP_RIGHT,
            Lang::EN => en::ALIGN_TOP_RIGHT,
			Lang::ZH-CN => zhcn::ALIGN_TOP_RIGHT,
			Lang::ZH-TW => zhtw::ALIGN_TOP_RIGHT,
        }
    }
    
    pub fn align_bottom(self) -> &'static str {
        match self {
            Lang::RU => ru::ALIGN_BOTTOM,
            Lang::EN => en::ALIGN_BOTTOM,
			Lang::ZH-CN => zhcn::ALIGN_BOTTOM,
			Lang::ZH-TW => zhtw::ALIGN_BOTTOM,
        }
    }
    
    pub fn esp_text_shadow(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT_CONSTAST,
            Lang::EN => en::ESP_TEXT_CONSTAST,
			Lang::ZH-CN => zhcn::ESP_TEXT_CONSTAST,
			Lang::ZH-TW => zhtw::ESP_TEXT_CONSTAST,
        }
    }
    
    pub fn esp_text_font_size(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT_FONT_SIZE,
            Lang::EN => en::ESP_TEXT_FONT_SIZE,
			Lang::ZH-CN => zhcn::ESP_TEXT_FONT_SIZE,
			Lang::ZH-TW => zhtw::ESP_TEXT_FONT_SIZE,
        }
    }
    
    pub fn esp_text(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT,
            Lang::EN => en::ESP_TEXT,
			Lang::ZH-CN => zhcn::ESP_TEXT,
			Lang::ZH-TW => zhtw::ESP_TEXT,
        }
    }
    
    pub fn esp_text_hero_name(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT_HERO_NAME,
            Lang::EN => en::ESP_TEXT_HERO_NAME,
			Lang::ZH-CN => zhcn::ESP_TEXT_HERO_NAME,
			Lang::ZH-TW => zhtw::ESP_TEXT_HERO_NAME,
        }
    }
    
    pub fn esp_text_health(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT_HEALTH,
            Lang::EN => en::ESP_TEXT_HEALTH,
			Lang::ZH-CN => zhcn::ESP_TEXT_HEALTH,
			Lang::ZH-TW => zhtw::ESP_TEXT_HEALTH,
        }
    }
    
    pub fn esp_text_distance(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_TEXT_DISTANCE,
            Lang::EN => en::ESP_TEXT_DISTANCE,
			Lang::ZH-CN => zhcn::ESP_TEXT_DISTANCE,
			Lang::ZH-TW => zhtw::ESP_TEXT_DISTANCE,
        }
    }
    
    pub fn esp_radar(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR,
            Lang::EN => en::ESP_RADAR,
			Lang::ZH-CN => zhcn::ESP_RADAR,
			Lang::ZH-TW => zhtw::ESP_RADAR,
        }
    }
    
    pub fn esp_radar_radius(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_RADIUS,
            Lang::EN => en::ESP_RADAR_RADIUS,
			Lang::ZH-CN => zhcn::ESP_RADAR_RADIUS,
			Lang::ZH-TW => zhtw::ESP_RADAR_RADIUS,
        }
    }
    
    pub fn esp_radar_scale(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_SCALE,
            Lang::EN => en::ESP_RADAR_SCALE,
			Lang::ZH-CN => zhcn::ESP_RADAR_SCALE,
			Lang::ZH-TW => zhtw::ESP_RADAR_SCALE,
        }
    }
    
    pub fn esp_radar_color_enemy(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_COLOR_ENEMY,
            Lang::EN => en::ESP_RADAR_COLOR_ENEMY,
			Lang::ZH-CN => zhcn::ESP_RADAR_COLOR_ENEMY,
			Lang::ZH-TW => zhtw::ESP_RADAR_COLOR_ENEMY,
        }
    }
    
    pub fn esp_radar_color_teammate(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_COLOR_TEAMMATE,
            Lang::EN => en::ESP_RADAR_COLOR_TEAMMATE,
			Lang::ZH-CN => zhcn::ESP_RADAR_COLOR_TEAMMATE,
			Lang::ZH-TW => zhtw::ESP_RADAR_COLOR_TEAMMATE,
        }
    }
    
    pub fn esp_radar_color_bg(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_COLOR_BACKGROUND,
            Lang::EN => en::ESP_RADAR_COLOR_BACKGROUND,
			Lang::ZH-CN => zhcn::ESP_RADAR_COLOR_BACKGROUND,
			Lang::ZH-TW => zhtw::ESP_RADAR_COLOR_BACKGROUND,
        }
    }
    
    pub fn esp_radar_color_stroke(self) -> &'static str {
        match self {
            Lang::RU => ru::ESP_RADAR_COLOR_STROKE,
            Lang::EN => en::ESP_RADAR_COLOR_STROKE,
			Lang::ZH-CN => zhcn::ESP_RADAR_COLOR_STROKE,
			Lang::ZH-TW => zhtw::ESP_RADAR_COLOR_STROKE,
        }
    }
}

pub(super) mod ru
{
    pub const ENABLE: &str = "Включить";
    pub const COLOR: &str = "Цвет";
    pub const CONFIG: &str = "Настройки";
    pub const CONFIG_LOAD: &str = "Загрузить настройки";
    pub const CONFIG_SAVE: &str = "Сохранить настройки";
    pub const CONFIG_DEFAULT: &str = "Загрузить стандартные настройки";
    pub const REPOSITORY: &str = "Репозиторий (исходный код и обновления)";
    pub const CLOSE: &str = "Закрыть";

    pub const ALIGN_TOP: &str = "Сверху";
    pub const ALIGN_TOP_LEFT: &str = "Левый верхний угол";
    pub const ALIGN_TOP_RIGHT: &str = "Правый верхний угол";
    pub const ALIGN_BOTTOM: &str = "Снизу";

    pub const AIM_NOT_CALIBRATED: &str = "АИМ НЕ ОТКАЛИБРОВАН";
    pub const AIM_CALIBRATE: &str = "Откалибровать";
    pub const AIM_PLAYERS: &str = "Игроки";
    pub const AIM_CREEPS: &str = "Крипы и души";
    pub const AIM_ENABLE: &str = "Включить помощь в наведении";
    pub const AIM_VELOCITY_PREDICTION: &str = "Учитывать ускорение";
    pub const AIM_RCS: &str = "Контролировать отдачу";
    pub const AIM_TARGETING: &str = "Захват только одной цели";
    pub const AIM_FOV_COLOR: &str = "Цвет FOV";
    pub const AIM_FOV: &str = "FOV";
    pub const AIM_SMOOTH: &str = "Плавность";
    pub const AIM_MAX_DISTANCE: &str = "Максимальная дистанция";
    pub const AIM_METERS: &str = "метров";

    pub const ESP_PLAYERS_RECTANGLE: &str = "Прямоугольник";
    pub const ESP_PLAYERS_RECTANGLE_TYPE: &str = "Тип прямоугольника";
    pub const ESP_PLAYERS_RECTANGLE_STROKE: &str = "Обводка прямоугольника";
    pub const ESP_PLAYERS_RECTANGLE_FILL: &str = "Заливка прямоугольника";
    pub const ESP_PLAYERS_RECTANGLE_HEAD: &str = "Голова";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW: &str = "Тень прямоугольника";
    pub const ESP_PLAYERS_RECTANGLE_STROKE_VALUE: &str = "Толщина линии";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW_VALUE: &str = "Размер тени";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE: &str = "Размытие тени";
    
    pub const ESP_HEALTHBAR: &str = "Шкала здоровья";
    pub const ESP_HEALTHBAR_BACKGROUND: &str = "Цвет заднего форма";
    pub const ESP_HEALTHBAR_HEALTH: &str = "Цвет здоровья";
    pub const ESP_HEALTHBAR_STROKE: &str = "Цвет обводки";

    pub const ESP_TEXT_CONSTAST: &str = "Контрастный";
    pub const ESP_TEXT_FONT_SIZE: &str = "Размер шрифта";
    pub const ESP_TEXT: &str = "Текст";
    pub const ESP_TEXT_HERO_NAME: &str = "Имя героя";
    pub const ESP_TEXT_HEALTH: &str = "Здоровье";
    pub const ESP_TEXT_DISTANCE: &str = "Дистанция";

    pub const ESP_RADAR: &str = "Радар";
    pub const ESP_RADAR_RADIUS: &str = "Радиус точки игрока";
    pub const ESP_RADAR_SCALE: &str = "Маштаб";
    pub const ESP_RADAR_COLOR_ENEMY: &str = "Цвет врага";
    pub const ESP_RADAR_COLOR_TEAMMATE: &str = "Цвет союзника";
    pub const ESP_RADAR_COLOR_BACKGROUND: &str = "Цвет фона";
    pub const ESP_RADAR_COLOR_STROKE: &str = "Цвет обводки";
}

// Burger
pub(super) mod en
{
    pub const ENABLE: &str = "Enable";
    pub const COLOR: &str = "Color";
    pub const CONFIG: &str = "Config";
    pub const CONFIG_LOAD: &str = "Load config";
    pub const CONFIG_SAVE: &str = "Save config";
    pub const CONFIG_DEFAULT: &str = "Load default config";
    pub const REPOSITORY: &str = "Repository (source code & updates)";
    pub const CLOSE: &str = "Close";

    pub const ALIGN_TOP: &str = "Top";
    pub const ALIGN_TOP_LEFT: &str = "Left";
    pub const ALIGN_TOP_RIGHT: &str = "Right";
    pub const ALIGN_BOTTOM: &str = "Bottom";
    
    pub const AIM_NOT_CALIBRATED: &str = "AIM NOT CALIBRATED";
    pub const AIM_CALIBRATE: &str = "Calibrate";
    pub const AIM_PLAYERS: &str = "Players";
    pub const AIM_CREEPS: &str = "Creeps and souls";
    pub const AIM_ENABLE: &str = "Enable aim assist";
    pub const AIM_VELOCITY_PREDICTION: &str = "Velocity prediction";
    pub const AIM_RCS: &str = "RCS";
    pub const AIM_TARGETING: &str = "Only one target";
    pub const AIM_FOV_COLOR: &str = "FOV color";
    pub const AIM_FOV: &str = "FOV";
    pub const AIM_SMOOTH: &str = "Smooth";
    pub const AIM_MAX_DISTANCE: &str = "Maximum distance";
    pub const AIM_METERS: &str = "meters";

    pub const ESP_PLAYERS_RECTANGLE: &str = "Rectangle";
    pub const ESP_PLAYERS_RECTANGLE_TYPE: &str = "Rectangle type";
    pub const ESP_PLAYERS_RECTANGLE_STROKE: &str = "Rectangle stroke";
    pub const ESP_PLAYERS_RECTANGLE_FILL: &str = "Rectangle fill";
    pub const ESP_PLAYERS_RECTANGLE_HEAD: &str = "Head";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW: &str = "Rectangle shadow";
    pub const ESP_PLAYERS_RECTANGLE_STROKE_VALUE: &str = "Stroke thickness";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW_VALUE: &str = "Shadow size";
    pub const ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE: &str = "Shadow blur";
    
    pub const ESP_HEALTHBAR: &str = "Healthbar";
    pub const ESP_HEALTHBAR_BACKGROUND: &str = "Background color";
    pub const ESP_HEALTHBAR_HEALTH: &str = "Value color";
    pub const ESP_HEALTHBAR_STROKE: &str = "Stroke color";

    pub const ESP_TEXT_CONSTAST: &str = "Shadow";
    pub const ESP_TEXT_FONT_SIZE: &str = "Font size";
    pub const ESP_TEXT: &str = "Text";
    pub const ESP_TEXT_HERO_NAME: &str = "Hero name";
    pub const ESP_TEXT_HEALTH: &str = "Health";
    pub const ESP_TEXT_DISTANCE: &str = "Distance";

    pub const ESP_RADAR: &str = "Radar";
    pub const ESP_RADAR_RADIUS: &str = "Player dot radius";
    pub const ESP_RADAR_SCALE: &str = "Scale";
    pub const ESP_RADAR_COLOR_ENEMY: &str = "Enemy color";
    pub const ESP_RADAR_COLOR_TEAMMATE: &str = "Teammate color";
    pub const ESP_RADAR_COLOR_BACKGROUND: &str = "Bacgkround color";
    pub const ESP_RADAR_COLOR_STROKE: &str = "Stroke color";
}

pub (super) mod zhcn
{
	pub const ENABLE: &str = "启用";
	pub const COLOR: &str = "颜色";
	pub const CONFIG: &str = "设置";
	pub const CONFIG_LOAD: &str = "载入设置";
	pub const CONFIG_SAVE: &str = "储存设置";
	pub const CONFIG_DEFAULT: &str = "载入预设设置";
	pub const REPOSITORY: &str = "资源库（源码与更新）";
	pub const CLOSE: &str = "关闭";

	pub const ALIGN_TOP: &str = "上方";
	pub const ALIGN_TOP_LEFT: &str = "左上方";
	pub const ALIGN_TOP_RIGHT: &str = "右上方";
	pub const ALIGN_BOTTOM: &str = "下方";

	pub const AIM_NOT_CALIBRATED: &str = "自瞄";
	pub const AIM_CALIBRATE: &str = "提前量";
	pub const AIM_PLAYERS: &str = "玩家";
	pub const AIM_CREEPS: &str = "小兵与魂球";
	pub const AIM_ENABLE: &str = "启用自瞄";
	pub const AIM_VELOCITY_PREDICTION: &str = "提前量设置";
	pub const AIM_RCS: &str = "无后座力";
	pub const AIM_TARGETING: &str = "锁定目標";
	pub const AIM_FOV_COLOR: &str = "自瞄圈顏色";
	pub const AIM_FOV: &str = "自瞄范围";
	pub const AIM_SMOOTH: &str = "自瞄平滑";
	pub const AIM_MAX_DISTANCE: &str = "最大距离";
	pub const AIM_METERS: &str = "米";

	pub const ESP_PLAYERS_RECTANGLE: &str = "矩形";
	pub const ESP_PLAYERS_RECTANGLE_TYPE: &str = "矩形类型";
	pub const ESP_PLAYERS_RECTANGLE_STROKE: &str = "描边";
	pub const ESP_PLAYERS_RECTANGLE_FILL: &str = "填充";
	pub const ESP_PLAYERS_RECTANGLE_HEAD: &str = "头部发光";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW: &str = "阴影";
	pub const ESP_PLAYERS_RECTANGLE_STROKE_VALUE: &str = "描边粗细";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW_VALUE: &str = "阴影尺寸";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE: &str = "阴影模糊";

	pub const ESP_HEALTHBAR: &str = "生命值";
	pub const ESP_HEALTHBAR_BACKGROUND: &str = "背景颜色";
	pub const ESP_HEALTHBAR_HEALTH: &str = "生命值颜色";
	pub const ESP_HEALTHBAR_STROKE: &str = "描边颜色";

	pub const ESP_TEXT_CONSTAST: &str = "文字对比";
	pub const ESP_TEXT_FONT_SIZE: &str = "字体大小";
	pub const ESP_TEXT: &str = "玩家ID";
	pub const ESP_TEXT_HERO_NAME: &str = "英雄名称";
	pub const ESP_TEXT_HEALTH: &str = "生命值";
	pub const ESP_TEXT_DISTANCE: &str = "距离";

	pub const ESP_RADAR: &str = "雷达";
	pub const ESP_RADAR_RADIUS: &str = "玩家点半径";
	pub const ESP_RADAR_SCALE: &str = "雷达缩放";
	pub const ESP_RADAR_COLOR_ENEMY: &str = "敌人颜色";
	pub const ESP_RADAR_COLOR_TEAMMATE: &str = "队友颜色";
	pub const ESP_RADAR_COLOR_BACKGROUND: &str = "背景颜色";
	pub const ESP_RADAR_COLOR_STROKE: &str = "描边颜色";

}

pub (super) mod zhtw
{
	pub const ENABLE: &str = "啟用";
	pub const COLOR: &str = "顏色";
	pub const CONFIG: &str = "設定";
	pub const CONFIG_LOAD: &str = "載入設定";
	pub const CONFIG_SAVE: &str = "儲存設定";
	pub const CONFIG_DEFAULT: &str = "載入預設設定";
	pub const REPOSITORY: &str = "資源庫（源碼與更新）";
	pub const CLOSE: &str = "關閉";

	pub const ALIGN_TOP: &str = "正上方";
	pub const ALIGN_TOP_LEFT: &str = "左上角";
	pub const ALIGN_TOP_RIGHT: &str = "右上角";
	pub const ALIGN_BOTTOM: &str = "正下方";

	pub const AIM_NOT_CALIBRATED: &str = "自瞄";
	pub const AIM_CALIBRATE: &str = "提前量";
	pub const AIM_PLAYERS: &str = "玩家";
	pub const AIM_CREEPS: &str = "小兵與魂球";
	pub const AIM_ENABLE: &str = "啟用自瞄";
	pub const AIM_VELOCITY_PREDICTION: &str = "提前量設置";
	pub const AIM_RCS: &str = "無後座";
	pub const AIM_TARGETING: &str = "鎖定目標";
	pub const AIM_FOV_COLOR: &str = "FOV顏色";
	pub const AIM_FOV: &str = "FOV";
	pub const AIM_SMOOTH: &str = "自瞄平滑";
	pub const AIM_MAX_DISTANCE: &str = "最大距離";
	pub const AIM_METERS: &str = "公尺";

	pub const ESP_PLAYERS_RECTANGLE: &str = "矩形";
	pub const ESP_PLAYERS_RECTANGLE_TYPE: &str = "矩形類型";
	pub const ESP_PLAYERS_RECTANGLE_STROKE: &str = "描邊";
	pub const ESP_PLAYERS_RECTANGLE_FILL: &str = "填充";
	pub const ESP_PLAYERS_RECTANGLE_HEAD: &str = "頭部發光";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW: &str = "陰影";
	pub const ESP_PLAYERS_RECTANGLE_STROKE_VALUE: &str = "描邊粗細";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW_VALUE: &str = "陰影尺寸";
	pub const ESP_PLAYERS_RECTANGLE_SHADOW_BLUR_VALUE: &str = "陰影模糊";

	pub const ESP_HEALTHBAR: &str = "生命值";
	pub const ESP_HEALTHBAR_BACKGROUND: &str = "背景顏色";
	pub const ESP_HEALTHBAR_HEALTH: &str = "生命值顏色";
	pub const ESP_HEALTHBAR_STROKE: &str = "描邊顏色";

	pub const ESP_TEXT_CONSTAST: &str = "文字對比";
	pub const ESP_TEXT_FONT_SIZE: &str = "字型大小";
	pub const ESP_TEXT: &str = "玩家ID";
	pub const ESP_TEXT_HERO_NAME: &str = "英雄名";
	pub const ESP_TEXT_HEALTH: &str = "生命值";
	pub const ESP_TEXT_DISTANCE: &str = "距離";

	pub const ESP_RADAR: &str = "雷達";
	pub const ESP_RADAR_RADIUS: &str = "玩家點半徑";
	pub const ESP_RADAR_SCALE: &str = "雷達縮放";
	pub const ESP_RADAR_COLOR_ENEMY: &str = "敵人顏色";
	pub const ESP_RADAR_COLOR_TEAMMATE: &str = "隊友顏色";
	pub const ESP_RADAR_COLOR_BACKGROUND: &str = "背景顏色";
	pub const ESP_RADAR_COLOR_STROKE: &str = "描邊顏色";

}