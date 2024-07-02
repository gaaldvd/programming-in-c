// evaluation of expression with exponentials

#include <stdio.h>

int main(void) {

    // (3.31*10^-8 * 2.01*10^-7) / (7.16*10^-6 + 2.01*10^-8)

    float x = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

    printf("x = %e\n", x);

    return 0;

}