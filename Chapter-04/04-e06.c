// evaluation of polynomial

#include <stdio.h>

int main(void) {

    // 3x^3 - 5x^2 + 6 = y; x = 2.55

    float x = 2.55, y;

    y = 3 * (x * x * x) - 5 * (x * x) + 6;
    printf("y = %f\n", y);

    return 0;

}