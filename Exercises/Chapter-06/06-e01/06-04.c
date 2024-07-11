// determine parity with if-else

#include <stdio.h>

int main(void) {

    int number, remainder;

    printf("number: ");
    scanf("%i", &number);

    remainder = number % 2;

    if (remainder == 0) printf("the number is even\n");
    else printf("the number is odd\n");

    return 0;

}