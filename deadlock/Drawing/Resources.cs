using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Drawing
{
    internal class Resources
    {
        public static void Initialize(Graphics g)
        {
            Share = g.CreateSolidBrush(255, 0, 0, 255);
            Share2 = g.CreateSolidBrush(0, 0, 0, 100);
            Consolas = g.CreateFont("Consolas", 14);
        }

        public static SolidBrush Share = null!;
        public static SolidBrush Share2 = null!;
        public static GameOverlay.Drawing.Font Consolas = null!;
    }
}
