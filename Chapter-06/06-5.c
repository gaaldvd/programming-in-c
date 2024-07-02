#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int n, d;
    bool isNeg;

    printf("n: ");
    scanf("%i", &n);

    if (n < 0) {
        isNeg = true;
        n *= -1;
    }
    else isNeg = false;

    do {
        d = n % 10;
        printf("%i", d);
        n /= 10;
    } while (n);

    (isNeg) ? printf("-\n") : printf("\n");

    return 0;
}