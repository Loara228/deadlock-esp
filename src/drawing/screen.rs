use egui::Vec2;
use windows::Win32::{Foundation::HWND, Graphics::Gdi::{GetDC, GetDeviceCaps, HORZRES, VERTRES}, UI::WindowsAndMessaging::{GetSystemMetrics, SM_CMONITORS, SYSTEM_METRICS_INDEX}};

/// returns: (pos, size)
pub fn detect() -> (Vec2, Vec2)
{
    unsafe
    {
        if multi_monitor_support()
        {
            let hdc = GetDC(HWND(std::ptr::null_mut()));
            
            let width = GetDeviceCaps(hdc, HORZRES) as f32;
            let height = GetDeviceCaps(hdc, VERTRES) as f32;
            
            let monitor_info = (
                Vec2 { x: 0f32, y: 0f32 },
                Vec2 { x: width, y: height}
            );
            log::info!("Primary: {:?}", monitor_info);
            return  monitor_info;
        }
        let x = GetSystemMetrics(SYSTEM_METRICS_INDEX(0)) as f32;
        let y = GetSystemMetrics(SYSTEM_METRICS_INDEX(1)) as f32;
        let monitor_info = (
            Vec2 { x: 0f32, y: 0f32 },
            Vec2 { x, y }
        );
        log::info!("Primary: {:?}", monitor_info);
        return  monitor_info;
    }
}

unsafe fn multi_monitor_support() -> bool
{
    let monitors = GetSystemMetrics(SM_CMONITORS);
    log::info!("SM_CMONITORS: {monitors}");
    monitors > 1
}