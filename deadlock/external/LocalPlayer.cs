using deadlock.Drawing;
using deadlock.external.Structs;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external
{
    internal class LocalPlayer : PlayerBase
    {
        public LocalPlayer()
        {

        }

        public override void Update()
        {
            AddressBase = Memory.Read<IntPtr>(Memory.ClientPtr + Offsets.LocalPlayer);
            UpdateProperties();
        }

        public override void Draw(Graphics g)
        {
        }

        protected override void UpdateProperties()
        {
            ControllerBase = Memory.Read<IntPtr>(Memory.ClientPtr + Offsets.LocalPlayer);

            var pawnHandle = Memory.Read<IntPtr>(ControllerBase + Offsets.m_hPawn);
            var listEntry = Memory.Read<IntPtr>(Deadlock.EntityList + 0x8 * ((pawnHandle & 0x7FFF) >> 0x9) + 0x10);
            Pawn = Memory.Read<IntPtr>(listEntry + 0x78 * (pawnHandle & 0x1FF));

            Health = Memory.Read<int>(ControllerBase + Offsets.m_ihealth);
            MaxHealth = Memory.Read<int>(ControllerBase + Offsets.m_iMaxHealth);
            TeamNum = Memory.Read<int>(ControllerBase + Offsets.m_iTeamNum);
            HeroID = Memory.Read<int>(ControllerBase + Offsets.m_heroid);
            ViewAngles = Memory.Read<Vector3>(ControllerBase + Offsets.v_angle);

            GameSceneNode = Memory.Read<IntPtr>(Pawn + Offsets.m_pGameSceneNode);
            Position = Memory.Read<Vector3>(GameSceneNode + Offsets.m_vecAbsOrigin);

            MatrixViewProjection = Matrix.Transpose(Memory.Read<Matrix>(Memory.ClientPtr + Offsets.ViewMatrix));
            MatrixViewport = Matrix.GetMatrixViewport(new System.Drawing.Size((int)Overlay.Current.Bounds.Width, (int)Overlay.Current.Bounds.Height));
            MatrixViewProjectionViewport = MatrixViewProjection * MatrixViewport;
        }

        public Vector3 ViewAngles = new Vector3();
        private Matrix MatrixViewProjection { get; set; }
        public Matrix MatrixViewport { get; private set; }
        public Matrix MatrixViewProjectionViewport { get; private set; }
    }
}
