using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external
{
    internal class PlayerData
    {
        public void Update(IntPtr ControllerBase)
        {
            //IntPtr playerDataGlobal = ControllerBase + Offsets.m_PlayerDataGlobal + 12;
            //Level = Memory.Read<int>(playerDataGlobal + 4);
            //MaxAmmo = Memory.Read<int>(playerDataGlobal + 8);
        }

        public int Level
        {
            get; set;
        }

        public int MaxAmmo
        {
            get; set;
        }
    }
}
