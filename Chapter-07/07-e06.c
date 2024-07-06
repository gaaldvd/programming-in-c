// first 15 Fibonacci numbers without arrays, 07-03 modified

#include <stdio.h>

int main(void) {

    int fib, fib1 = 0, fib2 = 1; // by definition

    printf("%i\n%i\n", fib1, fib2);

    for (int i = 2; i < 15; i++) {
        fib = fib1 + fib2;
        printf("%i\n", fib);
        fib1 = fib2, fib2 = fib;
    }

    return 0;

}