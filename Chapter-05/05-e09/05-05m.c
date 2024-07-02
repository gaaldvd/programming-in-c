// 05-05 with while loops
#include <stdio.h>

int main(void) {

    int n, number, counter = 1, triangularNumber;

    while (counter <= 5) {
        printf("which triangular number? ");
        scanf("%i", &number);
        triangularNumber = 0, n = 1;

        while (n <= number) {
            triangularNumber += n;
            n++;
        }

        printf("triangular number %i: %i\n", number, triangularNumber);
        counter++;
    }

    return 0;

}