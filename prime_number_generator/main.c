
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int primes[50];
    primes[0] = 2;
    primes[1] = 3;
    int index = 2;
    bool isPrime;

    for (int i = 5; i <= 100; i = i + 2)
    {
        isPrime = true;

        for (int k = 1; isPrime && i / primes[k] >= k; ++k)
        {
            if (i % primes[k] == 0)
                isPrime = false;
        }

        if (isPrime == true)
        {
            primes[index] = i;
            ++index;
        }
    }

    for (int j = 0; j < index; ++j)
        printf("%i ", primes[j]);

    return 0;
}
