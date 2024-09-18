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
            const float offset_left = 550, offset_bottom = 20, size = 200;
            _radar = new Rectangle(offset_left, Overlay.Current.Bounds.Bottom - offset_bottom - size, offset_left + size, Overlay.Current.Bounds.Bottom - offset_bottom);
            _center = new Vector2(_radar.Left + _radar.Width / 2, _radar.Top + _radar.Height / 2);
        }

        public static void Draw(Graphics g)
        {
            if (!Program.enable_radar)
                return;
            Resources.Share.Color = new Color(0, 0, 0, 150);
            g.FillRectangle(Resources.Share, _radar);
            Resources.Share.Color = new Color(255, 255, 255, 150);
            g.DrawRectangle(Resources.Share, _radar, 1);


            foreach (Player player in Deadlock.Players)
            {
                if (player.Index == Deadlock.LocalPlayer.Index || !player.Data.Alive)
                    continue;

                bool enemy = player.TeamNum != Deadlock.LocalPlayer.TeamNum;

                Vector3 localPos = Deadlock.LocalPlayer.Position;
                Vector2 entityWorldPos = new Vector2(localPos.X - player.Position.X, localPos.Y - player.Position.Y);
                entityWorldPos /= _scale + 1;
                entityWorldPos.X *= -1;
                entityWorldPos += _center;
                Vector2 entityRadarPos = TransformPosToRadar(entityWorldPos, _center, _radar, Deadlock.LocalPlayer.ViewAngles.Y - 90);

                if (entityRadarPos == Vector2.Zero)
                    return;

                Resources.Share.Color = !enemy ? new Color(75, 192, 117) : new Color(235, 103, 110, 255);
                g.FillCircle(Resources.Share, entityRadarPos.X, entityRadarPos.Y, enemy ? 4 : 3);
            }


            Resources.Share.Color = new Color(255, 255, 255, 150);
            g.FillCircle(Resources.Share, _center.X, _center.Y, 3);
            g.DrawLine(Resources.Share, _center.X, _center.Y, _radar.Left, _radar.Top, 1);
            g.DrawLine(Resources.Share, _center.X, _center.Y, _radar.Right, _radar.Top, 1);
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

        private static float _scale = 29f;
        private static Rectangle _radar = new Rectangle();
        private static Vector2 _center = new Vector2();
    }
}
