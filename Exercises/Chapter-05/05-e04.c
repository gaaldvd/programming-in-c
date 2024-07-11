// first ten factorials

#include <stdio.h>

int main(void) {

    int n = 1;

    for (int i = 1; i <= 10; i++) {
        n *= i;
        printf("%3i! = %i\n", i, n);
    }

    return 0;

}