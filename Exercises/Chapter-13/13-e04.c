// MAX3 macro

#include <stdio.h>

#define MAX3(a,b,c) (((a) > (b)) ? (((a) > (c)) ? (a) : (c)) : (((b) > (c)) ? (b) : (c)))

int main(void) {

    int a = 5, b = -5, c = 0;

    printf("MAX3(%i, %i, %i) = %i\n", a, b, c, MAX3(a, b, c));
    printf("MAX3(100, 5, -20) = %i\n", MAX3(100, 5, -20));

    return 0;

}