// triangular numbers for every 5th number between 5 and 50

#include <stdio.h>

int main(void) {

    // n(n+1)/2

    for (int i = 5; i <= 50; i += 5) {
        int n = i * (i + 1) / 2;
        printf("%-2i: %i\n", i, n);
    }

    return 0;

}