// restructured code

#include <stdio.h>

int main(void) {

    int n, twoToTheN = 1;

    printf("TABLE OF SQUARES OF 2\n\n");
    printf(" n  n^2\n");
    printf("--- ----\n");

    for (n = 0; n <=10; n++) {
        printf("%-2i  %i\n", n, twoToTheN);
        twoToTheN *= 2;
    }

    return 0;

}