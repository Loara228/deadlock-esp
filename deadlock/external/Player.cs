using deadlock.Drawing;
using deadlock.external.Structs;
using deadlock.Stuff;
using deadlock.Utils;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external
{
    internal class Player : PlayerBase
    {
        public Player(int index)
        {
            this.Index = index;
            Skeleton = new Skeleton();
        }

        public override void Update()
        {
            AddressBase = Memory.Read<IntPtr>(Deadlock.EntityList + 8 * ((Index & 0x7FFF) >> 9) + 16);

            if (AddressBase == IntPtr.Zero)
                return;

            if (Deadlock.LocalPlayer.AddressBase == AddressBase)
            {
                Deadlock.LocalPlayer.Index = this.Index;
                return;
            }

            UpdateProperties();
        }

        protected override void UpdateProperties()
        {
            base.UpdateProperties();
            Skeleton.Update(GameSceneNode);
        }

        public override void Draw(Graphics g)
        {
            if (Health <= 0 || TeamNum == Deadlock.LocalPlayer.TeamNum)
                return;
            var vec = g.GetWorldPos(Position);
            if (vec == Vector3.Zero)
                return;
            Resources.Share.Color = new Color(255, 255, 255);
            Bones.Draw(g, this);
            Boxes.Draw(g, this);
        }

        public Skeleton Skeleton
        {
            get; set;
        }
    }
}
