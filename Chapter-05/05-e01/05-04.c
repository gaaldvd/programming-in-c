// input for triangular number

#include <stdio.h>

int main(void) {

    int n, number, triangularNumber = 0;

    printf("which triangular number? ");
    scanf("%i", &number);

    for (n = 1; n <= number; n++) triangularNumber += n;
    printf("triangular number %i: %i\n", number, triangularNumber);

    return 0;

}