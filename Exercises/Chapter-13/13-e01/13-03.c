// the #include statement

#include <stdio.h>
#include "metric.h"

int main(void) {

    float liters, gallons;

    printf("*** liter to gallon ***\n\n");
    printf("liter: ");
    scanf("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;
    printf("%g liter = %g gallon\n", liters, gallons);

    return 0;

}