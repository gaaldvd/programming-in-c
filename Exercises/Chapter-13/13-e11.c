// isupper, isalpha, isdigit functions of the standard library

#include <stdio.h>
#include <ctype.h>

#define IS_LOWER_CASE(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_UPPER_CASE(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_ALPHABETIC(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))
#define IS_DIGIT(c) (((c) >= '0') && ((c) <= '9'))

int main(void) {

    char a = 'A', b = 'b', c = '2', d = '?';

    printf("c                 %c     %c     %c     %c\n", a, b, c, d);
    printf("----------------------------------------\n");
    printf("IS_UPPER_CASE  %4i  %4i  %4i  %4i\n", IS_UPPER_CASE(a), IS_UPPER_CASE(b), IS_UPPER_CASE(c), IS_UPPER_CASE(d));
    printf("isupper()      %4i  %4i  %4i  %4i\n\n", isupper(a), isupper(b), isupper(c), isupper(d));
    printf("IS_ALPHABETIC  %4i  %4i  %4i  %4i\n", IS_ALPHABETIC(a), IS_ALPHABETIC(b), IS_ALPHABETIC(c), IS_ALPHABETIC(d));
    printf("isalpha()      %4i  %4i  %4i  %4i\n\n", isalpha(a), isalpha(b), isalpha(c), isalpha(d));
    printf("IS_DIGIT       %4i  %4i  %4i  %4i\n", IS_DIGIT(a), IS_DIGIT(b), IS_DIGIT(c), IS_DIGIT(d));
    printf("isdigit()      %4i  %4i  %4i  %4i\n", isdigit(a), isdigit(b), isdigit(c), isdigit(d));

    return 0;

}