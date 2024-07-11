// determine parity

#include <stdio.h>

int main(void) {

    int number, remainder;

    printf("number: ");
    scanf("%i", &number);

    remainder = number % 2;

    if (remainder == 0) printf("the number is even\n");
    if (remainder != 0) printf("the number is odd\n");

    return 0;

}