using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock
{
    internal static class Offsets
    {
        internal static IntPtr dwEntityList = 0x1f24888;
        internal static IntPtr ViewMatrix = 0x20e21f0;
        internal static IntPtr LocalPlayerController = 0x20d06d0;
        internal static IntPtr CCitadelCameraManager = 0x1f46170;

        internal static IntPtr m_boneArray = 0x80;

        //C_CitadelBaseAbility
        //CitadelHeroData_t
        //C_BaseModelEntity
        //C_BasePlayerWeapon
        //CCollisionProperty
        //CCitadelPlayer_ObserverServices
    }
}


