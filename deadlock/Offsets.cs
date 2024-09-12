using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock
{
    internal static class Offsets
    {
        internal static IntPtr dwEntityList = 0x2380A28;
        internal static IntPtr ViewMatrix = 0x253C3D0;
        internal static IntPtr LocalPlayer = 0x252B4E0;


        internal static IntPtr m_pGameSceneNode = 0x328;
        internal static IntPtr m_ihealth = 0x790;
        internal static IntPtr m_iMaxHealth = 0x758;
        internal static IntPtr m_iTeamNum = 0x3ef;
        internal static IntPtr m_vecAbsOrigin = 0xd0;
        internal static IntPtr m_boneArray = 0x80;
        internal static IntPtr m_hPawn = 0x60c;
        internal static IntPtr m_modelState = 0x170;
        internal static IntPtr v_angle = 0xd54;
        internal static IntPtr m_hModel = 0xa0;
        internal static IntPtr m_heroid = 0x764;
    }
}
