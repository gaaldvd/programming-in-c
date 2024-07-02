// greatest common divisor

#include <stdio.h>

int main(void) {

    int u, v, temp;

    printf("two nonnegative integers: ");
    scanf("%i%i", &u, &v);

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("the greatest common divisor: %i\n", u);

    return 0;

}