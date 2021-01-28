// prime-pi.c

#include "prime-pi.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

uint64_t prime_pi(size_t n)
{
    // The ith index corresponds with the integer with value i e.g. i == 2 ->
    // number == 2. Since we start counting the primes from i == 1 (though, we
    // really start from 2), we ignore the zeroth index.
    bool* sieve = malloc((n + 1) * sizeof(bool));
    assert(sieve != NULL);

    // As per sieving algorithm, we initially set all integers >= 2 as prime.
    for (size_t i = 1; i <= n; i++)
    {
        sieve[i] = true;
    }

    for (size_t i = 2; i <= n; i++)
    {
        // If we encounter a prime number, we start the sieving procedure.
        if (sieve[i])
        {
            // Give our prime number a better label.
            size_t p = i;

            // Given a prime p, we should start sieving from the _next_ multiple
            // of it i.e. 2 * p, 3 * p, ... <= n.
            for (size_t j = 2 * p; j <= n; j += p)
            {
                sieve[j] = false;
            }
        }
    }

    // After we have finished sieving out all prime multiples, the remaining
    // numbers will be primes.
    uint64_t prime_count = 0;
    for (size_t i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            prime_count++;
        }
    }

    free(sieve);

    return prime_count;
}
