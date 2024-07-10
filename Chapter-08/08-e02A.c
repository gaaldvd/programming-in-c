// n. triangular number function, 08-04 modified

#include <stdio.h>

int main(void) {

    int calculateTriangularNumber(int n);

    printf("%i. triangular number: %i\n", 10, calculateTriangularNumber(10));
    printf("%i. triangular number: %i\n", 20, calculateTriangularNumber(20));
    printf("%i. triangular number: %i\n", 50, calculateTriangularNumber(50));

    return 0;

}

int calculateTriangularNumber(int n) {

    int triangularNumber = 0;

    for (int i = 1; i <= n; i++) triangularNumber += i;

    return triangularNumber;

}