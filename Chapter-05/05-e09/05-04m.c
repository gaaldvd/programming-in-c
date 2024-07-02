// 05-04 with while loop

#include <stdio.h>

int main(void) {

    int n = 1, number, triangularNumber = 0;

    printf("which triangular number? ");
    scanf("%i", &number);

    while (n <= number) {
        triangularNumber += n;
        n++;
    }
    printf("triangular number %i: %i\n", number, triangularNumber);

    return 0;

}