// table of squares

#include <stdio.h>

int main(void) {

    printf("  i  | i^2\n");
    printf("-----|-----\n");

    for (int i = 1; i <= 10; i++) printf(" %-3i | %-4i\n", i, i * i);

    return 0;

}