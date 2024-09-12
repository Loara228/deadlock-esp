using deadlock.external;
using deadlock.Pinvoke;
using deadlock.Stuff;
using GameOverlay.Drawing;
using GameOverlay.Windows;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Principal;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Drawing
{
    internal class Overlay
    {
        public Overlay()
        {
            Current = this;

            Bounds = Screen.GetBounds();

            Radar.Init();

            Graphics g = new Graphics()
            {
                MeasureFPS = true,
                PerPrimitiveAntiAliasing = true,
                TextAntiAliasing = true
            };
            OverlayWindow = new GraphicsWindow((int)Bounds.Left, (int)Bounds.Top, (int)Bounds.Width, (int)Bounds.Height)
            {
                IsTopmost = true,
                IsVisible = true,
                FPS = 60
            };

            OverlayWindow.SetupGraphics += OnSetupGraphics;
            OverlayWindow.DrawGraphics += DrawGraphics;

            OverlayWindow.Create();

            OverlayWindow.Join();
        }

        private void OnSetupGraphics(object? sender, SetupGraphicsEventArgs e)
        {
            Graphics g = e.Graphics;
            Resources.Initialize(g);
        }

        private void DrawGraphics(object? sender, DrawGraphicsEventArgs e)
        {
            Graphics g = e.Graphics;
            g.ClearScene();
            Deadlock.Update();
            Deadlock.Draw(g);
        }

        public static Overlay Current
        {
            get; set;
        } = null!;

        public GraphicsWindow OverlayWindow
        {
            get; private set;
        }

        public Rectangle Bounds
        {
            get; private set;
        }
    }
}
