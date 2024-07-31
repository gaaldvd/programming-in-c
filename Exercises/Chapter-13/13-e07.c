// IS_ALPHABETIC macro

#include <stdio.h>

#define IS_LOWER_CASE(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

int main(void) {

    char a = 'A', b = 'b', c = '2', d = '?';

    printf("%c: %i, %c: %i, %c: %i, %c: %i\n", a, IS_ALPHABETIC(a), b, IS_ALPHABETIC(b), c, IS_ALPHABETIC(c), d, IS_ALPHABETIC(d));

    return 0;

}