using deadlock.Drawing;
using deadlock.external;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;
namespace deadlock.Utils
{
    internal static class Extensions
    {

        public static void DrawLineWorld(this Graphics g, float stroke, params Vector3[] verticesWorld)
        {
            var verticesScreen = verticesWorld
                .Select(v => Deadlock.LocalPlayer.MatrixViewProjectionViewport.Transform(v))
                .Where(v => v.Z < 1)
                .Select(v => new Vector2(v.X, v.Y)).ToArray();
            if (verticesScreen.Length < 2 || verticesScreen.Length % 2 != 0) return;
            g.DrawLine(Resources.Share,
                new Point(verticesScreen[0].X, verticesScreen[0].Y),
                new Point(verticesScreen[1].X, verticesScreen[1].Y), stroke);
        }

        public static Vector3 GetWorldPos(this Graphics g, Vector3 posWorld)
        {
            var v = Deadlock.LocalPlayer.MatrixViewProjectionViewport.Transform(posWorld);
            if (v.Z < 1)
                return v;
            return Vector3.Zero;
        }
    }
}
