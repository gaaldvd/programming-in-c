// factorial function (recursive)

#include <stdio.h>

int main(void) {

    unsigned int i;
    unsigned long int factorial(unsigned int n);

    for (i = 0; i < 11; i++) printf("%2u! = %lu\n", i, factorial(i));

    return 0;

}

unsigned long int factorial(unsigned int n) {

    unsigned long int result;

    if (!n) result = 1;
    else result = n * factorial(n - 1);

    return result;

}