// IS_UPPER_CASE macro

#include <stdio.h>

#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))

int main(void) {

    char a = 'A', b = 'b';

    printf("%c: %i, %c: %i\n", a, IS_UPPER_CASE(a), b, IS_UPPER_CASE(b));

    return 0;

}