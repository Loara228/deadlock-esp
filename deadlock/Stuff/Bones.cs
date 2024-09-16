using deadlock.Drawing;
using deadlock.external;
using deadlock.Utils;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Stuff
{
    internal static class Bones
    {
        public static void Draw(Graphics g, Player player)
        {
            if (!Program.enable_bones)
                return;
            Resources.Share.Color = new Color(255, 0, 0, 100);
            Resources.Share2.Color = new Color(0, 0, 0, 100);
            foreach (var pos in player.Skeleton.Bones)
            {
                var v2 = g.GetWorldPos(pos);
                if (v2 == Vector3.Zero)
                    continue;
                g.OutlineCircle(Resources.Share2, Resources.Share, new Circle(v2.X, v2.Y, 2), 2);
            }
        }
    }
}
