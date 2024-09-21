use egui::Vec2;
use windows::Win32::{Graphics::Gdi::{GetMonitorInfoA, HMONITOR, MONITORINFO}, UI::WindowsAndMessaging::{GetSystemMetrics, SM_CMONITORS, SYSTEM_METRICS_INDEX}};

/// returns: (pos, size)
pub fn detect() -> (Vec2, Vec2)
{
    unsafe
    {
        if multi_monitor_support()
        {
            let mut ipmi: MONITORINFO = MONITORINFO::default();
            GetMonitorInfoA(HMONITOR(PRIMARY_MONITOR as isize), &mut ipmi);
            log::info!("MONITORINFO: {:?}", ipmi);
            return (
                Vec2 { x: ipmi.rcMonitor.left as f32, y: ipmi.rcMonitor.top as f32 },
                Vec2 { x: ipmi.rcMonitor.right as f32, y: ipmi.rcMonitor.bottom as f32 }
            );
        }
        
        let x = GetSystemMetrics(SYSTEM_METRICS_INDEX(0)) as f32;
        let y = GetSystemMetrics(SYSTEM_METRICS_INDEX(1)) as f32;
        let monitor_info = (
            Vec2 { x: 0., y: 0. },
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

const PRIMARY_MONITOR: isize = -1163005939isize;