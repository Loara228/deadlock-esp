using deadlock.Drawing;
using deadlock.external;

namespace deadlock
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (!Memory.Initialize())
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("game not found");
                Console.ReadKey();
                Environment.Exit(0);
            }
            else
                Console.Beep();
            new Thread(() =>
            {
                while (true)
                {
                    PrintInfo();
                    var key = Console.ReadKey().Key;
                    if (key == ConsoleKey.D1)
                        enable_boxes = !enable_boxes;
                    else if (key == ConsoleKey.D2)
                        enable_bones = !enable_bones;
                    else if (key == ConsoleKey.D3)
                        enable_healthbar = !enable_healthbar;
                    else if (key == ConsoleKey.D4)
                        enable_text = !enable_text;
                    else
                        continue;
                }
            }).Start();
            new Overlay(); // sync
        }

        static void PrintInfo()
        {
            Console.Clear();
            PrintField("1. boxes", enable_boxes);
            PrintField("2. bones", enable_bones);
            PrintField("3. healthbar", enable_healthbar);
            PrintField("4. hero info", enable_text);
        }

        static void PrintField(string name, bool enabled)
        {
            Console.Write($"{name}:\t{(name.Length >= 8 ? "" : "\t")}");
            Console.ForegroundColor = enabled ? ConsoleColor.Green : ConsoleColor.Red;
            Console.Write(enabled.ToString());
            Console.ForegroundColor = ConsoleColor.Gray;
            Console.WriteLine();
        }

        public static bool enable_boxes = true;
        public static bool enable_bones = false;
        public static bool enable_healthbar = true;
        public static bool enable_text = true;
    }
}
