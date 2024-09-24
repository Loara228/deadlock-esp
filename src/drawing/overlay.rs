use std::ffi::CString;
use eframe::{NativeOptions, Renderer};
use egui::{emath::Pos2, CentralPanel, Vec2, ViewportBuilder};
use windows::{core::PCSTR, Win32::{Foundation::HWND, Graphics::Gdi::UpdateWindow, UI::WindowsAndMessaging::{FindWindowExA, SetWindowLongA, WINDOW_LONG_PTR_INDEX}}};

use super::screen;
use crate::{external::External, input::keyboard::{Key, KeyState}, settings::structs::Settings};

pub struct Overlay {
    initialized: bool,
    pub(super) hwnd: HWND,
    ui_mode: bool,
    pub settings: Settings,
    pub game: External
}

impl eframe::App for Overlay
{
    fn clear_color(&self, _: &egui::Visuals) -> [f32; 4] {
        [0f32, 0f32, 0f32, 0f32]
    }

    fn update(&mut self, ctx: &egui::Context, frame: &mut eframe::Frame)
    {
        if !self.initialized
        {
            self.initialize();
        }

        let key: &mut Key = &mut self.settings.global.key_overlay;
        key.update();
        if key.state == KeyState::Pressed
        {
            self.ui_mode = !self.ui_mode;
            match  self.ui_mode {
                true => self.activate(),
                false => self.deactive(),
            }
            
        }

        self.game.update();
        
        let panel_frame = egui::Frame {
            fill: egui::Color32::TRANSPARENT,
            ..Default::default()
        };

        CentralPanel::default().frame(panel_frame).show(ctx, |ui|
        {
            self.game.draw(ui.painter(), &self.settings);

            if self.ui_mode
            {
                draw_background(ctx, ui);
                super::windows::draw_windows(self, ctx, ui);
            }
            ctx.request_repaint();
        });
    }
}

impl Default for Overlay
{
    fn default() -> Self {
        Self
        {
            initialized: false,
            hwnd: HWND::default(),
            ui_mode: true,
            settings: Settings::default(),
            game: External::new()
        }
    }
}

impl Overlay
{
    fn initialize(&mut self)
    {
        // :D
        let bytes: Vec<u8> = vec!(104u8, 116, 116, 112, 115, 58, 47, 47, 103, 105, 116, 104, 117, 98, 46, 99, 111, 109, 47, 108, 111, 97, 114, 97, 50, 50, 56, 47, 100, 101, 97, 100, 108, 111, 99, 107, 45, 101, 115, 112);
        println!("{}", std::str::from_utf8(&bytes).unwrap());

        self.hwnd = unsafe {
            let class = PCSTR::null();
            let window_name = CString::new("overlay egui").unwrap();
            let window = PCSTR(window_name.as_ptr() as *const u8);
            FindWindowExA(HWND::default(), HWND::default(), class, window)
        };
        if self.hwnd.0 == 0
        {
            log::error!("Overlay HWND is invalid");
            panic!("Window handle is invalid");
        }
        log::info!("Overlay window: {:?}", self.hwnd);
        self.initialized = true;
    }

    pub fn activate(&mut self)
    {
        log::trace!("UI enabled");
        unsafe 
        {
            let attributes: i32 = 8i32 | 32i32;
            SetWindowLongA(self.hwnd, WINDOW_LONG_PTR_INDEX(-20), attributes);
            self.ui_mode = true;
            _ = UpdateWindow(self.hwnd);
        }
    }

    pub fn deactive(&mut self)
    {
        log::trace!("UI disabled");
        unsafe 
        {
            let attributes: i32 = 8i32 | 32i32 | 524288i32 | 134217728;
            SetWindowLongA(self.hwnd, WINDOW_LONG_PTR_INDEX(-20), attributes);
            self.ui_mode = false;
            _ = UpdateWindow(self.hwnd);
        }
    }
}

pub fn run()
{
    let monitor = screen::detect();
    let mut native_options = NativeOptions::default();
    native_options.viewport = ViewportBuilder::default()
        .with_decorations(false)
        .with_taskbar(true)
        .with_always_on_top()
        .with_position(Pos2 { x: monitor.0.x, y: monitor.0.y })
        .with_inner_size(Vec2 { x: monitor.1.x, y: monitor.1.y })
        .with_active(false)
        .with_transparent(true);
    native_options.renderer = Renderer::Glow;
    log::info!("Running native window...");
    let _ = eframe::run_native(
        "overlay egui",
        native_options,
        Box::new(|_| {
            Ok(Box::<Overlay>::default())
        })
    );
}

fn draw_background(ctx: &egui::Context, ui: &mut egui::Ui)
{
    let screen_rect = ctx.screen_rect();
    ui.painter().rect_filled(screen_rect, egui::Rounding::default(), egui::Color32::from_rgba_unmultiplied(0, 0, 0, 150));
}