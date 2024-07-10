// nested for loop

#include <stdio.h>

int main(void) {

    int n, number, counter, triangularNumber;

    for (counter = 1; counter <= 5; counter++) {
        printf("which triangular number: ");
        scanf("%i", &number);
        triangularNumber = 0;

        for (n = 1; n <= number; n++) triangularNumber += n;

        printf("%i. triangular number: %i\n", number, triangularNumber);
    }

    return 0;

}