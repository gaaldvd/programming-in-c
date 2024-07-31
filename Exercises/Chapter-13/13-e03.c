// MIN macro

#include <stdio.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main(void) {

    int a = 5, b = -5;

    printf("MIN(%i, %i) = %i\n", a, b, MIN(a, b));
    printf("MIN(100, 5) = %i\n", MIN(100, 5));

    return 0;

}