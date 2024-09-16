using deadlock.Drawing;
using deadlock.external;
using deadlock.external.Structs;
using deadlock.Utils;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using static Dumper.Schemas.ClientDll;

namespace deadlock.Stuff
{
    internal static class Boxes
    {
        public static void Draw(Graphics g, Player p)
        {
            var v2Top = g.GetWorldPos(p.Skeleton.HeadPos);
            var v2Bottom = g.GetWorldPos(p.Position);
            if (v2Top == Vector3.Zero || v2Bottom == Vector3.Zero)
                return;

            Resources.Share2.Color = new Color(0, 0, 0, 255);

            float boxHeight = v2Bottom.Y - v2Top.Y;
            float boxWidth = (boxHeight / 2) * 1.25f;
            var box = new Rectangle(v2Bottom.X - (boxWidth / 2), v2Top.Y - (boxHeight / 8) + 1, v2Bottom.X - (boxWidth / 2) + boxWidth, v2Top.Y + boxHeight);

            float hpPerc = 100f / p.MaxHealth * p.Health;

            if (Program.enable_boxes)
            {
                if (hpPerc <= 15)
                    Resources.Share.Color = new Color(234, 103, 109);
                else if (hpPerc <= 30)
                    Resources.Share.Color = new Color(253, 184, 88);
                else if (hpPerc <= 50)
                    Resources.Share.Color = new Color(253, 239, 88);
                else
                    Resources.Share.Color = new Color(75, 192, 117);
                //g.DrawRectangleEdges(Resources.Share2, box, 3);
                g.DrawRectangleEdges(Resources.Share2, box.Left, box.Top, box.Right, box.Bottom, 4);
                g.DrawRectangleEdges(Resources.Share, box.Left, box.Top, box.Right, box.Bottom, 2);
            }

            Resources.Share.Color = new Color(0, 0, 0, 100);
            var progressBar = new Rectangle(box.Left, box.Bottom + 4, box.Right, box.Bottom + 10);

            if (Program.enable_healthbar)
            {
                g.FillRectangle(Resources.Share, progressBar);
                Resources.Share.Color = new Color(255, 255, 255, 255);
                Resources.Share2.Color = new Color(0, 0, 0, 255);
                g.DrawVerticalProgressBar(Resources.Share2, Resources.Share, progressBar, 1, hpPerc);
            }

            string text = $"{p.Health}/{p.MaxHealth}\n{((HeroIds)p.Data.HeroID).ToString()}";

            if (Program.enable_text)
            {
                Resources.Share.Color = new Color(0, 0, 0, 255);
                g.DrawText(Resources.Consolas, Resources.Share, new Point(progressBar.Left + 2, progressBar.Bottom + 2), text);
                Resources.Share.Color = new Color(255, 255, 255, 255);
                g.DrawText(Resources.Consolas, Resources.Share, new Point(progressBar.Left, progressBar.Bottom), text);
            }
        }
    }
}
