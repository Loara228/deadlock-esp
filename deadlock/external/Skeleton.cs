using deadlock.Drawing;
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
    internal class Skeleton
    {
        public Skeleton()
        {
            Bones = new List<Vector3>();
        }

        public void Update(IntPtr gameSceneNode)
        {
            UpperBone = new Vector3(0, 0, -100);
            Bones.Clear();
            BoneArray = Memory.Read<IntPtr>(gameSceneNode + Offsets.m_modelState + Offsets.m_boneArray);
            for (int i = 0; i < 64; i++)
            {
                IntPtr boneAddress = BoneArray + i * 32;
                var pos = Memory.Read<Vector3>(boneAddress);
                if (pos.Z > UpperBone.Z)
                    UpperBone = pos;
                Bones.Add(pos);
            }
        }

        public IntPtr BoneArray
        {
            get; set;
        }

        public List<Vector3> Bones
        {
            get; set;
        }

        public Vector3 UpperBone
        {
            get; set;
        }
    }
}
