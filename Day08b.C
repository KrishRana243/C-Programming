// Prime no. generator

#include <stdio.h>
#include <stdbool.h>

int main() {
    int p, i;
    bool isprime;

    int primes[50];
    int primeIndex = 2;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 100; p += 2) {
        isprime = true;

        for (i = 1; i < primeIndex && isprime; i++) {
            if (p % primes[i] == 0)
                isprime = false;
        }

        if (isprime) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    // Print primes
    for (i = 0; i < primeIndex; ++i) {
        printf("%d ", primes[i]);
    }

    printf("\n");

    return 0;
}
