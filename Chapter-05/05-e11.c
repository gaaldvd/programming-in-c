// sum of digits

#include <stdio.h>

int main(void) {

    int number, sum = 0;

    printf("number: ");
    scanf("%i", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("sum = %i\n", sum);

    return 0;

}