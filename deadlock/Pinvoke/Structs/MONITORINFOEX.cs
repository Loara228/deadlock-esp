using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Pinvoke.Structs
{
    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Auto, Pack = 4)]
    internal class MONITORINFOEX
    {
        // Token: 0x04003BF4 RID: 15348
        internal int cbSize = Marshal.SizeOf(typeof(MONITORINFOEX));

        // Token: 0x04003BF5 RID: 15349
        internal RECT rcMonitor;


        // Token: 0x04003BF6 RID: 15350
        internal RECT rcWork;

        // Token: 0x04003BF7 RID: 15351
        internal int dwFlags;

        // Token: 0x04003BF8 RID: 15352
        [MarshalAs(UnmanagedType.ByValArray, SizeConst = 32)]
        internal char[] szDevice = new char[32];
    }
}
