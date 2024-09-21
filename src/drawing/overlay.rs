use eframe::{wgpu::rwh::{HasWindowHandle, WindowHandle}, NativeOptions};
use egui::{emath::Pos2, CentralPanel, Color32, Vec2, ViewportBuilder};
use windows::Win32::{Foundation::HWND, UI::WindowsAndMessaging::{SetWindowLongA, WINDOW_LONG_PTR_INDEX}};

use super::screen;
use crate::{external::External, input::keyboard::{Key, KeyState}, settings::Settings};

pub struct Overlay {
    initialized: bool,
    hwnd: HWND,
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
            self.initialize(frame.window_handle().unwrap());
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
    fn initialize(&mut self, hwnd: WindowHandle<'_>)
    {
        let hwnd = match hwnd.as_raw()
        {
            eframe::wgpu::rwh::RawWindowHandle::Win32(win32_window_handle) => 
            {
                Some(win32_window_handle.hwnd)
            },
            _ =>
            {
                None
            },
        };
        if hwnd == None
        {
            log::error!("Overlay HWND is invalid");
            panic!("Window handle is invalid");
        }
        self.hwnd = HWND(hwnd.unwrap().get());
        log::info!("Overlay window: {:?}", self.hwnd);
        self.initialized = true;
    }

    pub fn activate(&mut self)
    {
        log::info!("UI enabled");
        unsafe 
        {
            let attributes: i32 = 8i32 | 32i32;
            SetWindowLongA(self.hwnd, WINDOW_LONG_PTR_INDEX(-20), attributes);
            self.ui_mode = true;
            // UpdateWindow(self.hwnd);
        }
    }

    pub fn deactive(&mut self)
    {
        log::info!("UI disabled");
        unsafe 
        {
            let attributes: i32 = 8i32 | 32i32 | 524288i32 | 134217728;
            SetWindowLongA(self.hwnd, WINDOW_LONG_PTR_INDEX(-20), attributes);
            self.ui_mode = false;
            // UpdateWindow(self.hwnd);
        }
    }
}

pub fn run()
{
    let monitor = screen::detect();
    let mut native_options = NativeOptions::default();
    native_options.viewport = ViewportBuilder::default()
    .with_transparent(true)
    .with_decorations(false)
    .with_taskbar(true)
    .with_always_on_top()
    .with_position(Pos2 { x: monitor.0.x, y: monitor.0.y })
    .with_inner_size(Vec2 { x: monitor.1.x, y: monitor.1.y });

    log::info!("Running native window...");
    let _ = eframe::run_native(
        "overlay",
        native_options,
        Box::new(|_| {
            Ok(Box::<Overlay>::default())
        })
    );
}

fn draw_background(ctx: &egui::Context, ui: &mut egui::Ui)
{
    let screen_rect = ctx.screen_rect();
    ui.painter().rect_filled(screen_rect, egui::Rounding::default(), Color32::from_rgba_unmultiplied(0, 0, 0, 150));
}