// the do-wile loop

#include <stdio.h>

int main(void) {

    int number, rightDigit;

    printf("enter number to reverse: ");
    scanf("%i", &number);

    do  {
        rightDigit = number % 10;
        printf("%i", rightDigit);
        number /= 10;
    } while (number != 0);

    printf("\n");

    return 0;

}