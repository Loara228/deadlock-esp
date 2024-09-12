using SharpDX.Mathematics.Interop;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Numerics;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external.Structs
{
    internal struct Matrix
    {
        public Matrix(float m11, float m12, float m13, float m14,
                      float m21, float m22, float m23, float m24,
                      float m31, float m32, float m33, float m34,
                      float m41, float m42, float m43, float m44)
        {
            this.M11 = m11;
            this.M12 = m12;
            this.M13 = m13;
            this.M14 = m14;
            this.M21 = m21;
            this.M22 = m22;
            this.M23 = m23;
            this.M24 = m24;
            this.M31 = m31;
            this.M32 = m32;
            this.M33 = m33;
            this.M34 = m34;
            this.M41 = m41;
            this.M42 = m42;
            this.M43 = m43;
            this.M44 = m44;
        }

        public RawMatrix3x2 ToRaw3x2()
        {
            return new RawMatrix3x2(M11, M12, M21, M22, M31, M32);
        }

        // https://github.com/TheFlyingFoool/DuckGameRebuilt/blob/f4585af30e230eca673dd779c07d003157a7acd3/DuckGame/src/MonoTime/Maths/Matrix.cs#L715
        public static Matrix CreateRotationX(float radians)
        {
            Matrix m = Matrix.Identity;
            m.M22 = MathF.Cos(radians);
            m.M23 = MathF.Sin(radians);
            m.M32 = -m.M23;
            m.M33 = m.M22;
            return m;
        }

        public static Matrix CreateRotationY(float radians)
        {
            Matrix m = Matrix.Identity;
            m.M11 = MathF.Cos(radians);
            m.M13 = MathF.Sin(radians);
            m.M31 = -m.M13;
            m.M33 = m.M11;
            return m;
        }

        public static Matrix CreateRotationZ(float radians)
        {
            Matrix m = Identity;
            m.M11 = MathF.Cos(radians);
            m.M12 = MathF.Sin(radians);
            m.M21 = -m.M12;
            m.M22 = m.M11;
            return m;
        }

        public static Matrix GetMatrixViewport(Size screenSize)
        {
            return GetMatrixViewport(new Viewport
            {
                X = 0,
                Y = 0,
                Width = screenSize.Width,
                Height = screenSize.Height,
                MinDepth = 0,
                MaxDepth = 1
            });
        }

        private static Matrix GetMatrixViewport(in Viewport viewport)
        {
            return new Matrix
            {
                M11 = viewport.Width * 0.5f,
                M12 = 0,
                M13 = 0,
                M14 = 0,

                M21 = 0,
                M22 = -viewport.Height * 0.5f,
                M23 = 0,
                M24 = 0,

                M31 = 0,
                M32 = 0,
                M33 = viewport.MaxDepth - viewport.MinDepth,
                M34 = 0,

                M41 = viewport.X + viewport.Width * 0.5f,
                M42 = viewport.Y + viewport.Height * 0.5f,
                M43 = viewport.MinDepth,
                M44 = 1
            };
        }
        public Vector3 Transform(Vector3 value)
        {
            var wInv = 1.0 / ((double)M14 * (double)value.X + (double)M24 * (double)value.Y + (double)M34 * (double)value.Z + (double)M44);
            return new Vector3
            (
                (float)(((double)M11 * (double)value.X + (double)M21 * (double)value.Y + (double)M31 * (double)value.Z + (double)M41) * wInv),
                (float)(((double)M12 * (double)value.X + (double)M22 * (double)value.Y + (double)M32 * (double)value.Z + (double)M42) * wInv),
                (float)(((double)M13 * (double)value.X + (double)M23 * (double)value.Y + (double)M33 * (double)value.Z + (double)M43) * wInv)
            );
        }

        public static Matrix Transpose(Matrix matrix)
        {
            Matrix result;
            Matrix.Transpose(ref matrix, out result);
            return result;
        }

        public static void Transpose(ref Matrix matrix, out Matrix result)
        {
            Matrix matrix2;
            matrix2.M11 = matrix.M11;
            matrix2.M12 = matrix.M21;
            matrix2.M13 = matrix.M31;
            matrix2.M14 = matrix.M41;
            matrix2.M21 = matrix.M12;
            matrix2.M22 = matrix.M22;
            matrix2.M23 = matrix.M32;
            matrix2.M24 = matrix.M42;
            matrix2.M31 = matrix.M13;
            matrix2.M32 = matrix.M23;
            matrix2.M33 = matrix.M33;
            matrix2.M34 = matrix.M43;
            matrix2.M41 = matrix.M14;
            matrix2.M42 = matrix.M24;
            matrix2.M43 = matrix.M34;
            matrix2.M44 = matrix.M44;
            result = matrix2;
        }


        public static Matrix operator *(Matrix matrix1, Matrix matrix2)
        {
            float m = matrix1.M11 * matrix2.M11 + matrix1.M12 * matrix2.M21 + matrix1.M13 * matrix2.M31 + matrix1.M14 * matrix2.M41;
            float m2 = matrix1.M11 * matrix2.M12 + matrix1.M12 * matrix2.M22 + matrix1.M13 * matrix2.M32 + matrix1.M14 * matrix2.M42;
            float m3 = matrix1.M11 * matrix2.M13 + matrix1.M12 * matrix2.M23 + matrix1.M13 * matrix2.M33 + matrix1.M14 * matrix2.M43;
            float m4 = matrix1.M11 * matrix2.M14 + matrix1.M12 * matrix2.M24 + matrix1.M13 * matrix2.M34 + matrix1.M14 * matrix2.M44;
            float m5 = matrix1.M21 * matrix2.M11 + matrix1.M22 * matrix2.M21 + matrix1.M23 * matrix2.M31 + matrix1.M24 * matrix2.M41;
            float m6 = matrix1.M21 * matrix2.M12 + matrix1.M22 * matrix2.M22 + matrix1.M23 * matrix2.M32 + matrix1.M24 * matrix2.M42;
            float m7 = matrix1.M21 * matrix2.M13 + matrix1.M22 * matrix2.M23 + matrix1.M23 * matrix2.M33 + matrix1.M24 * matrix2.M43;
            float m8 = matrix1.M21 * matrix2.M14 + matrix1.M22 * matrix2.M24 + matrix1.M23 * matrix2.M34 + matrix1.M24 * matrix2.M44;
            float m9 = matrix1.M31 * matrix2.M11 + matrix1.M32 * matrix2.M21 + matrix1.M33 * matrix2.M31 + matrix1.M34 * matrix2.M41;
            float m10 = matrix1.M31 * matrix2.M12 + matrix1.M32 * matrix2.M22 + matrix1.M33 * matrix2.M32 + matrix1.M34 * matrix2.M42;
            float m11 = matrix1.M31 * matrix2.M13 + matrix1.M32 * matrix2.M23 + matrix1.M33 * matrix2.M33 + matrix1.M34 * matrix2.M43;
            float m12 = matrix1.M31 * matrix2.M14 + matrix1.M32 * matrix2.M24 + matrix1.M33 * matrix2.M34 + matrix1.M34 * matrix2.M44;
            float m13 = matrix1.M41 * matrix2.M11 + matrix1.M42 * matrix2.M21 + matrix1.M43 * matrix2.M31 + matrix1.M44 * matrix2.M41;
            float m14 = matrix1.M41 * matrix2.M12 + matrix1.M42 * matrix2.M22 + matrix1.M43 * matrix2.M32 + matrix1.M44 * matrix2.M42;
            float m15 = matrix1.M41 * matrix2.M13 + matrix1.M42 * matrix2.M23 + matrix1.M43 * matrix2.M33 + matrix1.M44 * matrix2.M43;
            float m16 = matrix1.M41 * matrix2.M14 + matrix1.M42 * matrix2.M24 + matrix1.M43 * matrix2.M34 + matrix1.M44 * matrix2.M44;
            matrix1.M11 = m;
            matrix1.M12 = m2;
            matrix1.M13 = m3;
            matrix1.M14 = m4;
            matrix1.M21 = m5;
            matrix1.M22 = m6;
            matrix1.M23 = m7;
            matrix1.M24 = m8;
            matrix1.M31 = m9;
            matrix1.M32 = m10;
            matrix1.M33 = m11;
            matrix1.M34 = m12;
            matrix1.M41 = m13;
            matrix1.M42 = m14;
            matrix1.M43 = m15;
            matrix1.M44 = m16;
            return matrix1;
        }

        // Token: 0x04000129 RID: 297
        [DataMember]
        public float M11;
        // Token: 0x0400012A RID: 298
        [DataMember]
        public float M12;
        // Token: 0x0400012B RID: 299
        [DataMember]
        public float M13;
        // Token: 0x0400012C RID: 300
        [DataMember]
        public float M14;
        // Token: 0x0400012D RID: 301
        [DataMember]
        public float M21;
        // Token: 0x0400012E RID: 302
        [DataMember]
        public float M22;
        // Token: 0x0400012F RID: 303
        [DataMember]
        public float M23;
        // Token: 0x04000130 RID: 304
        [DataMember]
        public float M24;
        // Token: 0x04000131 RID: 305
        [DataMember]
        public float M31;
        // Token: 0x04000132 RID: 306
        [DataMember]
        public float M32;
        // Token: 0x04000133 RID: 307
        [DataMember]
        public float M33;
        // Token: 0x04000134 RID: 308
        [DataMember]
        public float M34;
        // Token: 0x04000135 RID: 309
        [DataMember]
        public float M41;
        // Token: 0x04000136 RID: 310
        [DataMember]
        public float M42;
        // Token: 0x04000137 RID: 311
        [DataMember]
        public float M43;
        // Token: 0x04000138 RID: 312
        [DataMember]
        public float M44;
        // Token: 0x04000139 RID: 313
        public static Matrix Identity = new Matrix(1f, 0f, 0f, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 1f);
    }
}
