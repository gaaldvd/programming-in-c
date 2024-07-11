// reversing digits of a number

#include <stdio.h>

int main(void) {

    int number, rightDigit;

    printf("enter number to reverse: ");
    scanf("%i", &number);

    while (number != 0) {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number /= 10;
    }

    printf("\n");

    return 0;

}