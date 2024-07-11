// signum function

#include <stdio.h>

int main(void) {

    int number, sign;

    printf("number: ");
    scanf("%i", &number);

    if (number < 0) sign = -1;
    else if (number == 0) sign = 0;
    else sign = 1;

    printf("signum: %i\n", sign);

    return 0;

}