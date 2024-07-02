#include <stdio.h>

int main(void) {

    int a, b;

    printf("a b: ");
    scanf("%i %i", &a, &b);

    (a % b == 0) ? printf("a/b = %i\n", a / b) : printf("a%%b != 0\n");

    return 0;
}