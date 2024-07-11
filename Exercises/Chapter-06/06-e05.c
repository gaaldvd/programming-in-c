// reversing digits of a number, 05-09 modified

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int number, rightDigit;
    bool isNegative;

    printf("number: ");
    scanf("%i", &number);

    if (number < 0) {
        isNegative = true;
        number *= -1;
    } else isNegative = false;

    do {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number /= 10;
    } while (number);

    (isNegative) ? printf("-\n") : printf("\n");

    return 0;

}