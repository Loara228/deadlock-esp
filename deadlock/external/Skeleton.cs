using deadlock.Drawing;
using deadlock.Utils;
using GameOverlay.Drawing;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using static Dumper.Schemas.ClientDll;

namespace deadlock.external
{
    internal class Skeleton
    {
        public Skeleton(Player owner)
        {
            Bones = new List<Vector3>();
            this._owner = owner;
        }

        public void Update(IntPtr gameSceneNode)
        {
            HeadPos = new Vector3(0, 0, -100);
            Bones.Clear();
            BoneArray = Memory.Read<IntPtr>(gameSceneNode + CSkeletonInstance.m_modelState + Offsets.m_boneArray);
            for (int i = 0; i < 64; i++)
            {
                var pos = ReadBoneByIndex(i);
                if (pos.Z > HeadPos.Z)
                    HeadPos = pos;
                Bones.Add(pos);
            }
            if (_owner.Data.HeroID == Structs.HeroIds.Abrams)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.Bebop)
                HeadPos = ReadBoneByIndex(6);
            else if (_owner.Data.HeroID == Structs.HeroIds.Dynamo)
                HeadPos = ReadBoneByIndex(13);
            else if (_owner.Data.HeroID == Structs.HeroIds.GreyTalon)
                HeadPos = ReadBoneByIndex(17);
            else if (_owner.Data.HeroID == Structs.HeroIds.Haze)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.Infernus)
                HeadPos = ReadBoneByIndex(30);
            else if (_owner.Data.HeroID == Structs.HeroIds.Ivy)
                HeadPos = ReadBoneByIndex(13);
            else if (_owner.Data.HeroID == Structs.HeroIds.Kelvin)
                HeadPos = ReadBoneByIndex(12);
            else if (_owner.Data.HeroID == Structs.HeroIds.LadyGeist)
                HeadPos = ReadBoneByIndex(11);
            else if (_owner.Data.HeroID == Structs.HeroIds.Lash)
                HeadPos = ReadBoneByIndex(12);
            else if (_owner.Data.HeroID == Structs.HeroIds.McGinnis)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.MoAndKrill)
                HeadPos = ReadBoneByIndex(25); // 10
            else if (_owner.Data.HeroID == Structs.HeroIds.Paradox)
                HeadPos = ReadBoneByIndex(8);
            else if (_owner.Data.HeroID == Structs.HeroIds.Pocket)
                HeadPos = ReadBoneByIndex(13);
            else if (_owner.Data.HeroID == Structs.HeroIds.Seven)
                HeadPos = ReadBoneByIndex(14);
            else if (_owner.Data.HeroID == Structs.HeroIds.Shiv)
                HeadPos = ReadBoneByIndex(13);
            else if (_owner.Data.HeroID == Structs.HeroIds.Vindicta)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.Viscous)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.Warden)
                HeadPos = ReadBoneByIndex(11);
            else if (_owner.Data.HeroID == Structs.HeroIds.Wraith)
                HeadPos = ReadBoneByIndex(7);
            else if (_owner.Data.HeroID == Structs.HeroIds.Yamato)
                HeadPos = ReadBoneByIndex(35);
        }

        private Vector3 ReadBoneByIndex(int i)
        {
            IntPtr boneAddress = BoneArray + i * 32;
            return Memory.Read<Vector3>(boneAddress);
        }

        public IntPtr BoneArray
        {
            get; set;
        }

        public List<Vector3> Bones
        {
            get; set;
        }

        public Vector3 HeadPos
        {
            get; set;
        }

        private Player _owner;
    }
}
