// n. triangular number function

#include <stdio.h>

void calculateTriangularNumber(int n) {

    int triangularNumber = 0;

    for (int i = 1; i <= n; i++) triangularNumber += i;
    printf("%i. triangular number: %i\n", n, triangularNumber);

}

int main(void) {

    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);

    return 0;

}