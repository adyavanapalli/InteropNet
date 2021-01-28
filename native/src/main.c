// main.c

#include "constants.h"
#include "prime-pi.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // If no value is provided, use the default value for n i.e. in PrimePi(n).
    size_t n = DEFAULT_N;

    if (argc == 2)
    {
        n = strtoul(argv[1], NULL, BASE_10);
    }

    uint64_t prime_count = prime_pi(n);

    printf("prime_pi(%lu): %lu\n", n, prime_count);

    return 0;
}
