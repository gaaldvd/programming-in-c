// fahrenheit - celsius conversion

#include <stdio.h>

int main(void) {

    // C = (F - 32) / 1.8

    int f = 27;
    float c;

    c = (f - 32) / 1.8;
    printf("27 degrees fahrenheit = %f degrees celsius\n", c);

    return 0;

}