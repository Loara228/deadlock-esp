using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace deadlock.external.Structs
{
    internal struct Viewport
    {// Token: 0x17000341 RID: 833
     // (get) Token: 0x06000E43 RID: 3651 RVA: 0x0003837A File Offset: 0x0003657A
     // (set) Token: 0x06000E44 RID: 3652 RVA: 0x00038382 File Offset: 0x00036582
        [DataMember]
        public int Height
        {
            get
            {
                return this.height;
            }
            set
            {
                this.height = value;
            }
        }

        // Token: 0x17000342 RID: 834
        // (get) Token: 0x06000E45 RID: 3653 RVA: 0x0003838B File Offset: 0x0003658B
        // (set) Token: 0x06000E46 RID: 3654 RVA: 0x00038393 File Offset: 0x00036593
        [DataMember]
        public float MaxDepth
        {
            get
            {
                return this.maxDepth;
            }
            set
            {
                this.maxDepth = value;
            }
        }

        // Token: 0x17000343 RID: 835
        // (get) Token: 0x06000E47 RID: 3655 RVA: 0x0003839C File Offset: 0x0003659C
        // (set) Token: 0x06000E48 RID: 3656 RVA: 0x000383A4 File Offset: 0x000365A4
        [DataMember]
        public float MinDepth
        {
            get
            {
                return this.minDepth;
            }
            set
            {
                this.minDepth = value;
            }
        }

        // Token: 0x17000344 RID: 836
        // (get) Token: 0x06000E49 RID: 3657 RVA: 0x000383AD File Offset: 0x000365AD
        // (set) Token: 0x06000E4A RID: 3658 RVA: 0x000383B5 File Offset: 0x000365B5
        [DataMember]
        public int Width
        {
            get
            {
                return this.width;
            }
            set
            {
                this.width = value;
            }
        }

        // Token: 0x17000345 RID: 837
        // (get) Token: 0x06000E4B RID: 3659 RVA: 0x000383BE File Offset: 0x000365BE
        // (set) Token: 0x06000E4C RID: 3660 RVA: 0x000383C6 File Offset: 0x000365C6
        [DataMember]
        public int Y
        {
            get
            {
                return this.y;
            }
            set
            {
                this.y = value;
            }
        }

        // Token: 0x17000346 RID: 838
        // (get) Token: 0x06000E4D RID: 3661 RVA: 0x000383CF File Offset: 0x000365CF
        // (set) Token: 0x06000E4E RID: 3662 RVA: 0x000383D7 File Offset: 0x000365D7
        [DataMember]
        public int X
        {
            get
            {
                return this.x;
            }
            set
            {
                this.x = value;
            }
        }

        // Token: 0x17000347 RID: 839
        // (get) Token: 0x06000E4F RID: 3663 RVA: 0x000383E0 File Offset: 0x000365E0
        public float AspectRatio
        {
            get
            {
                if (this.height != 0 && this.width != 0)
                {
                    return (float)this.width / (float)this.height;
                }
                return 0f;
            }
        }

        // Token: 0x04000681 RID: 1665
        private int x;

        // Token: 0x04000682 RID: 1666
        private int y;

        // Token: 0x04000683 RID: 1667
        private int width;

        // Token: 0x04000684 RID: 1668
        private int height;

        // Token: 0x04000685 RID: 1669
        private float minDepth;

        // Token: 0x04000686 RID: 1670
        private float maxDepth;
    }
}
