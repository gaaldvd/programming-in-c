// check if two numbers are are evenly divisible

#include <stdio.h>

int main(void) {

    int a, b;

    printf("a b: ");
    scanf("%i %i", &a, &b);

    (a % b == 0) ? printf("%i is evenly divisible with %i\n", a, b) : printf("%i is not evenly divisible with %i\n", a, b);

    return 0;

}