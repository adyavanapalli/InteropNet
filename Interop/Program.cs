using System;
using System.Runtime.InteropServices;

namespace Interop
{
    class Program
    {
        [DllImport("../Native/lib/libprime-pi.so", EntryPoint = "prime_pi")]
        private static extern ulong PrimePi(ulong n);

        static void Main()
        {
            ulong n = 1_000_000;
            Console.WriteLine($"prime_pi({n}): {PrimePi(1_000_000)}");
        }
    }
}
