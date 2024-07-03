// absolute value of an integer

#include <stdio.h>

int main(void) {

    int number;

    printf("enter number: ");
    scanf("%i", &number);

    if (number < 0) number = -number;

    printf("absolute value: %i\n", number);

    return 0;

}