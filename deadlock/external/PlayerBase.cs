using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external
{
    internal abstract class PlayerBase
    {
        public PlayerBase()
        {
            Data = new PlayerData();
        }

        public abstract void Update();

        public abstract void Draw(Graphics g);

        protected virtual void UpdateProperties(bool local = false)
        {
            if (local)
                ControllerBase = Memory.Read<IntPtr>(Memory.ClientPtr + Offsets.LocalPlayerController);
            else
                ControllerBase = Memory.Read<IntPtr>(AddressBase + 120 * (Index & 0x1FF));

            if (ControllerBase == IntPtr.Zero)
                return;
            else if (ControllerBase == Deadlock.LocalPlayer.ControllerBase)
                Deadlock.LocalPlayer.Index = Index;

            Data.Update(ControllerBase);

            var pawnHandle = Memory.Read<IntPtr>(ControllerBase + Offsets.m_hPawn);
            var listEntry = Memory.Read<IntPtr>(Deadlock.EntityList + 0x8 * ((pawnHandle & 0x7FFF) >> 0x9) + 0x10);
            Pawn = Memory.Read<IntPtr>(listEntry + 0x78 * (pawnHandle & 0x1FF));

            Health = Memory.Read<int>(Pawn + Offsets.m_ihealth);
            MaxHealth = Memory.Read<int>(Pawn + Offsets.m_iMaxHealth);
            TeamNum = Memory.Read<int>(ControllerBase + Offsets.m_iTeamNum);
            HeroID = Memory.Read<int>(ControllerBase + Offsets.m_heroid);

            GameSceneNode = Memory.Read<IntPtr>(Pawn + Offsets.m_pGameSceneNode);
            Position = Memory.Read<Vector3>(GameSceneNode + Offsets.m_vecAbsOrigin);
        }

        public PlayerData Data
        {
            get; set;
        }

        public IntPtr AddressBase
        {
            get; set;
        }

        public IntPtr ControllerBase
        {
            get; set;
        }

        public IntPtr Pawn
        {
            get; set;
        }

        public IntPtr GameSceneNode
        {
            get; set;
        }

        public int Index
        {
            get; set;
        }

        public int Health
        {
            get; set;
        }

        public int MaxHealth
        {
            get; set;
        }

        public Vector3 Position
        {
            get; set;
        }

        public int TeamNum
        {
            get; set;
        }

        public int HeroID
        {
            get; set;
        }
    }
}
