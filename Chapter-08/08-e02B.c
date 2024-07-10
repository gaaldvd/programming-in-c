// n. triangular number function, 05-05 modified

#include <stdio.h>

int main(void) {

    int number, counter;
    int calculateTriangularNumber(int n);

    for (counter = 1; counter <= 5; counter++) {
        printf("which triangular number: ");
        scanf("%i", &number);
        printf("%i. triangular number: %i\n", number, calculateTriangularNumber(number));
    }

    return 0;

}

int calculateTriangularNumber(int n) {

    int triangularNumber = 0;

    for (int i = 1; i <= n; i++) triangularNumber += i;

    return triangularNumber;

}