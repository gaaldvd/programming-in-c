// the 200th triangular number, the for loop

#include <stdio.h>

int main(void) {

    int n, triangularNumber = 0;

    for (n = 1; n <= 200; n++) triangularNumber += n;
    printf("the 200th triangular number: %i\n", triangularNumber);

    return 0;

}