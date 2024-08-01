// PRINTINT macro

#include <stdio.h>

#define PRINTINT(n) printf(#n " = %i\n", n)
#define PRINTX(n) PRINTINT(x##n)

int main(void) {

    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;

    PRINTX(1);

    // doesn't work because the variable i translates to 'i' not the value of the variable (1, 2, ...)
    // for (int i = 1; i <= 5; i++) PRINTX(i);

    return 0;

}