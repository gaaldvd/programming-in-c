// division of two integers

#include <stdio.h>

int main(void) {

    int a, b;

    do {
        printf("a b: ");
        scanf("%i %i", &a, &b);
        if (b) {
            printf("%i / %i = %.3f\n", a, b, (float) a/b);
            break;
        }
    } while (!b);

    return 0;

}