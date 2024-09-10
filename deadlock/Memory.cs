using deadlock.Pinvoke;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace deadlock
{
    internal static class Memory
    {
        public static bool Initialize()
        {
            if (Process.GetProcessesByName(Process.GetCurrentProcess().ProcessName).Length > 1)
                return false;

            var procList = Process.GetProcessesByName("project8"); //Deadlock
            if (procList.Length == 0)
                return false;
            _proc = procList[0];
            foreach (ProcessModule module in _proc.Modules)
            {
                try
                {
                    if (module.ModuleName == "client.dll")
                    {
                        ClientPtr = module.BaseAddress;
                        return true;
                    }
                }
                catch { };
            }
            throw new DllNotFoundException("client.dll");
        }

        public static T Read<T>(IntPtr Address) where T : unmanaged
        {
            var size = Marshal.SizeOf<T>();
            var buffer = default(T) as object;
            Kernel32.ReadProcessMemory(_proc.Handle, Address, buffer, size, out var lpNumberOfBytesRead);
            return lpNumberOfBytesRead == size ? (T)buffer : default;
        }

        public static byte[] ReadBytes(IntPtr hProcess, IntPtr lpBaseAddress, int maxLength)
        {
            var buffer = new byte[maxLength];
            Kernel32.ReadProcessMemory(hProcess, lpBaseAddress, buffer, maxLength, out var lpNumberOfBytesRead);
            return buffer;
        }

        public static string ReadString(IntPtr lpBaseAddress, int maxLength = 256)
        {
            var buffer = ReadBytes(_proc.Handle, lpBaseAddress, maxLength);
            var nullCharIndex = Array.IndexOf(buffer, (byte)'\0');
            return nullCharIndex >= 0
                ? Encoding.UTF8.GetString(buffer, 0, nullCharIndex).Trim()
                : Encoding.UTF8.GetString(buffer).Trim();
        }

        public static IntPtr ClientPtr
        {
            get; set;
        }

        private static Process _proc = null!;
    }
}
