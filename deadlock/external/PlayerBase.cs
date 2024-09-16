using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using static Dumper.Schemas.ClientDll;

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

            var pawnHandle = Memory.Read<IntPtr>(ControllerBase + CBasePlayerController.m_hPawn);
            var listEntry = Memory.Read<IntPtr>(Deadlock.EntityList + 0x8 * ((pawnHandle & 0x7FFF) >> 0x9) + 0x10);
            Pawn = Memory.Read<IntPtr>(listEntry + 0x78 * (pawnHandle & 0x1FF));

            Health = Memory.Read<int>(Pawn + C_BaseEntity.m_iHealth);
            MaxHealth = Memory.Read<int>(Pawn + C_BaseEntity.m_iMaxHealth);
            TeamNum = Memory.Read<int>(ControllerBase + C_BaseEntity.m_iTeamNum);

            GameSceneNode = Memory.Read<IntPtr>(Pawn + C_BaseEntity.m_pGameSceneNode);
            Position = Memory.Read<Vector3>(GameSceneNode + CGameSceneNode.m_vecAbsOrigin);
            Dormant = Memory.Read<bool>(GameSceneNode + CGameSceneNode.m_bDormant);
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

        public bool Dormant
        {
            get; set;
        }
    }
}
