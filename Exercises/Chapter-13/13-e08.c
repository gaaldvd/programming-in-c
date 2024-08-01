// IS_DIGIT and IS_SPECIAL macros

#include <stdio.h>

#define IS_LOWER_CASE(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))

#define IS_DIGIT(c) (((c) >= '0') && ((c) <= '9'))
#define IS_SPECIAL(c) (!(IS_ALPHABETIC(c)) && !(IS_DIGIT(c)))

int main(void) {

    char a = 'A', b = 'b', c = '2', d = '?';

    printf("c   IS_DIGIT IS_SPECIAL\n");
    printf("%c   %i        %i\n", a, IS_DIGIT(a), IS_SPECIAL(a));
    printf("%c   %i        %i\n", b, IS_DIGIT(b), IS_SPECIAL(b));
    printf("%c   %i        %i\n", c, IS_DIGIT(c), IS_SPECIAL(c));
    printf("%c   %i        %i\n", d, IS_DIGIT(d), IS_SPECIAL(d));

    return 0;

}