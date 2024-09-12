using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.Pinvoke.Structs
{
    internal struct RECT
    {
        // Token: 0x06006C02 RID: 27650 RVA: 0x0018F199 File Offset: 0x0018D399
        public RECT(int left, int top, int right, int bottom)
        {
            this.left = left;
            this.top = top;
            this.right = right;
            this.bottom = bottom;
        }

        // Token: 0x06006C03 RID: 27651 RVA: 0x0018F1B8 File Offset: 0x0018D3B8
        public RECT(Rectangle r)
        {
            this.left = r.Left;
            this.top = r.Top;
            this.right = r.Right;
            this.bottom = r.Bottom;
        }

        // Token: 0x06006C04 RID: 27652 RVA: 0x0018F1EE File Offset: 0x0018D3EE
        public static RECT FromXYWH(int x, int y, int width, int height)
        {
            return new RECT(x, y, x + width, y + height);
        }

        // Token: 0x170017A9 RID: 6057
        // (get) Token: 0x06006C05 RID: 27653 RVA: 0x0018F1FD File Offset: 0x0018D3FD
        public Size Size
        {
            get
            {
                return new Size(this.right - this.left, this.bottom - this.top);
            }
        }

        // Token: 0x04003C44 RID: 15428
        public int left;

        // Token: 0x04003C45 RID: 15429
        public int top;

        // Token: 0x04003C46 RID: 15430
        public int right;

        // Token: 0x04003C47 RID: 15431
        public int bottom;
    }
}
