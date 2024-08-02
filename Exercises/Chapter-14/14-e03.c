// type conversions

#include <stdio.h>

int main(void) {

    float f = 1.00;
    short int i = 100;
    long int l = 500L;
    double d = 15.00;

    printf("%f\n", f + i); // float
    printf("%f\n", l / d); // float
    printf("%f\n", i / l + f); // float
    printf("%i\n", l * i); // int
    printf("%f\n", f / 2); // float
    printf("%f\n", i / (d + f)); // double
    printf("%f\n", l / (i * 2.0)); // double
    printf("%f\n", l + i / (double) l); // double

    return 0;

}