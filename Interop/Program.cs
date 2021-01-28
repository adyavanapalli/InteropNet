using System;
using System.Runtime.InteropServices;

namespace Interop
{
    class Program
    {
        [DllImport("../Native/lib/libprime-pi.so", EntryPoint = "prime_pi")]
        private static extern ulong PrimePi(ulong n);

        static void Main(string[] args)
        {
            if (args.Length != 1 || !ulong.TryParse(args[0], out ulong n))
            {
                Console.WriteLine("Usage: dotnet run -- <N>");
                return;
            }

            Console.WriteLine($"prime_pi({n}): {PrimePi(n)}");
        }
    }
}
