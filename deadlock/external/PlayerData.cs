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
            HeroID = Memory.Read<short>(playerDataGlobal + PlayerDataGlobal_t.m_nHeroID);
        }

        public int Level
        {
            get; set;
        }

        public int HeroID
        {
            get; set;
        }
    }
}
