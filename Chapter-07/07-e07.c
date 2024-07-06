// the Sieve of Eratosthenes

/* the description in the book is not obvious, 
so the algorithm presented here is modified on some point */

#include <stdio.h>

int main(void) {

    int i, j, n = 150, p[n];

    for (i = 0; i < n; i++) p[i] = 0;

    for (i = 2; i <= n; i++) {
        j = i;
        while (i * j <= n) {
            p[i * j] = 1;
            j++;
        }
    }

    for (i = 2; i < n; i++) if (p[i] == 0) printf("%i ", i);

    printf("\n");

    return 0;

}