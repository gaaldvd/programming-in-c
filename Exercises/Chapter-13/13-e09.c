// ABSOLUTE_VALUE macro

#include <stdio.h>

#define ABSOLUTE_VALUE(x) (((x) < 0) ? -(x) : (x))

int main(void) {

    int a = 5, b = -10, c = 2;

    printf("%i: %i\n%i: %i\n%i + %i: %i\n", a, ABSOLUTE_VALUE(a), b, ABSOLUTE_VALUE(b), b, c, ABSOLUTE_VALUE(b + c));

    return 0;

}