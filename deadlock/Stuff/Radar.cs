using deadlock.Drawing;
using deadlock.external;
using GameOverlay.Drawing;
using SharpDX;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Stuff
{
    internal static class Radar
    {
        public static void Init()
        {
            const float offset_left = 20, offset_bottom = 20, size = 150;
            _radar = new Rectangle(offset_left, Overlay.Current.Bounds.Bottom - offset_bottom - 150, offset_left + size, Overlay.Current.Bounds.Bottom - offset_bottom);
            Vector2 radarCenter = new Vector2(_radar.Left + _radar.Width / 2, _radar.Top + _radar.Height / 2);
        }

        public static void Draw(Graphics g)
        {
            Resources.Share.Color = new Color(0, 0, 0, 150);
            g.FillRectangle(Resources.Share, _radar);

            foreach (Player player in Deadlock.Players)
            {
                Vector3 localPos = Deadlock.LocalPlayer.Position;
                Vector2 entityWorldPos = new Vector2(localPos.X - player.Position.X, localPos.Y - player.Position.Y);
                entityWorldPos /= _scale + 1;
                entityWorldPos.X *= -1;
                entityWorldPos += _center;
                Vector2 entityRadarPos = TransformPosToRadar(entityWorldPos, _center, _radar, Deadlock.LocalPlayer.ViewAngles.Y - 90);

                if (entityRadarPos == Vector2.Zero)
                    return;


                g.FillCircle(Resources.Share, entityRadarPos.X, entityRadarPos.Y, 4);
            }
        }

        private static Vector2 TransformPosToRadar(Vector2 pointToRotate, Vector2 radarCenter, Rectangle radarRect, float angle)
        {
            Vector2 rotatedPoint = new Vector2();
            angle = (float)(angle * (Math.PI / (float)180));

            float cosTheta = (float)Math.Cos(angle);
            float sinTheta = (float)Math.Sin(angle);

            rotatedPoint.X = cosTheta * (pointToRotate.X - radarCenter.X) - sinTheta * (pointToRotate.Y - radarCenter.Y);
            rotatedPoint.Y = sinTheta * (pointToRotate.X - radarCenter.X) + cosTheta * (pointToRotate.Y - radarCenter.Y);

            rotatedPoint.X += radarCenter.X;
            rotatedPoint.Y += radarCenter.Y;


            if (rotatedPoint.X > radarRect.Left + radarRect.Width)
                rotatedPoint.X = radarRect.Left + radarRect.Width;

            if (rotatedPoint.Y > radarRect.Top + radarRect.Height)
                rotatedPoint.Y = radarRect.Top + radarRect.Height;

            if (rotatedPoint.X < radarRect.Left)
                rotatedPoint.X = radarRect.Left;

            if (rotatedPoint.Y < radarRect.Top)
                rotatedPoint.Y = radarRect.Top;

            return rotatedPoint;
        }

        private static float _scale = 5f;
        private static Rectangle _radar = new Rectangle();
        private static Vector2 _center = new Vector2();
    }
}
