// power function

#include <stdio.h>

int main(void) {

    int x, n;
    long int power(int x, int n);

    printf("x to the power of n: ");
    scanf("%i %i", &x, &n);

    printf("%i^%i = %li\n", x, n, power(x, n));

    return 0;

}

long int power(int x, int n) {

    long int y = 1;

    for (int i = 0; i < n; i++) y *= x;

    return y;

}