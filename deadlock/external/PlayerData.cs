using deadlock.external.Structs;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Dumper.Schemas.ClientDll;

namespace deadlock.external
{
    internal class PlayerData
    {
        public void Update(IntPtr ControllerBase)
        {
            IntPtr playerDataGlobal = ControllerBase + CCitadelPlayerController.m_PlayerDataGlobal;
            HeroID = (HeroIds)Memory.Read<short>(playerDataGlobal + PlayerDataGlobal_t.m_nHeroID);
            Alive = Memory.Read<bool>(playerDataGlobal + PlayerDataGlobal_t.m_bAlive);
        }

        public HeroIds HeroID
        {
            get; set;
        }

        public bool Alive
        {
            get; set;
        }
    }
}
