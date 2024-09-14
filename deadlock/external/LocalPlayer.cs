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
            UpdateProperties(true);
        }

        public override void Draw(Graphics g)
        {
        }

        protected override void UpdateProperties(bool local)
        {
            base.UpdateProperties(local);

            IntPtr camera = Memory.Read<IntPtr>(Memory.ClientPtr + Offsets.CCitadelCameraManager + 0x28);
            ViewAngles = Memory.Read<Vector3>(camera + 0x44);

            MatrixViewProjection = Matrix.Transpose(Memory.Read<Matrix>(Memory.ClientPtr + Offsets.ViewMatrix));
            MatrixViewport = Matrix.GetMatrixViewport(new System.Drawing.Size((int)Overlay.Current.Bounds.Width, (int)Overlay.Current.Bounds.Height));
            MatrixViewProjectionViewport = MatrixViewProjection * MatrixViewport;
        }

        public Matrix MatrixViewport
        {
            get; private set;
        }

        public Matrix MatrixViewProjectionViewport
        {
            get; private set;
        }

        private Matrix MatrixViewProjection
        {
            get; set;
        }

        public Vector3 ViewAngles = new Vector3();
    }
}
