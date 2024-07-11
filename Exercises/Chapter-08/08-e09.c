// least common multiple function

#include <stdio.h>

int main(void) {

    int gcd(int u, int v);
    int lcm(int u, int v);

    int u, v;

    printf("enter two positive integers: ");
    scanf("%i %i", &u, &v);

    (u <= 0 || v <= 0) ? printf("you must enter positive integers\n") : printf("lcm(%i, %i) = %i\n", u, v, lcm(u, v));

    return 0;

}

int gcd(int u, int v) {

    int temp;

    while (v) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;

}

int lcm(int u, int v) {

    return u*v / gcd(u, v);

}