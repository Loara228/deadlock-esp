using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock
{
    internal static class Offsets
    {
        internal static IntPtr dwEntityList = 0x1f23838;
        internal static IntPtr ViewMatrix = 0x20e11b0;
        internal static IntPtr LocalPlayerController = 0x20cf650;
        internal static IntPtr CCitadelCameraManager = 0x23D8930;

        internal static IntPtr m_pGameSceneNode = 0x328;
        internal static IntPtr m_ihealth = 0x790 + 16;
        internal static IntPtr m_iMaxHealth = 0x758 + 16;
        internal static IntPtr m_iTeamNum = 0x3eb;
        internal static IntPtr m_vecAbsOrigin = 0xd0;
        internal static IntPtr m_boneArray = 0x80;
        internal static IntPtr m_hPawn = 0x60c;
        internal static IntPtr m_modelState = 0x170;
        internal static IntPtr v_angle = 0xd54;
        internal static IntPtr m_hModel = 0xa0;
        internal static IntPtr m_heroid = 0x764 + 16;

        //C_BaseEntity
        //internal static IntPtr m_lifeState = 0x0350; // uint8
        //internal static IntPtr m_iMaxHealth = 0x348;
        //internal static IntPtr m_iHealth = 0x34C;
        //internal static IntPtr m_lifeState = 0x350;
        //internal static IntPtr m_iTeamNum = 0x3EF;

        //Controller
        internal static IntPtr m_PlayerDataGlobal = 0x0750; // PlayerDataGlobal_t
    }
}
