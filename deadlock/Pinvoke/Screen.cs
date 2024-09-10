using deadlock.Pinvoke.Structs;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Pinvoke
{
    internal static class Screen
    {
        //https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getsystemmetrics
        public static Rectangle GetBounds()
        {
            if (multiMonitorSupport)
            {
                GetPrimarybounds(PRIMARY_MONITOR, IntPtr.Zero);
            }
            return new Rectangle(0, 0, User32.GetSystemMetrics(0), User32.GetSystemMetrics(1));
        }

        public static Rectangle GetPrimarybounds(IntPtr monitor, IntPtr hdc = 0)
        {
            MONITORINFOEX monitorinfoex = new MONITORINFOEX();
            User32.GetMonitorInfo(new HandleRef(null, monitor), monitorinfoex);
            return new Rectangle(monitorinfoex.rcMonitor.left, monitorinfoex.rcMonitor.top, monitorinfoex.rcMonitor.right, monitorinfoex.rcMonitor.bottom);

        }

        private static bool multiMonitorSupport = User32.GetSystemMetrics(80) != 0;
        private const int PRIMARY_MONITOR = -1163005939;
    }
}
