// 05-02 with while loop

#include <stdio.h>

int main(void) {

    int n = 1, triangularNumber = 0;

    while (n <= 200) {
        triangularNumber += n;
        n++;
    }
    printf("the 200th triangular number: %i\n", triangularNumber);

    return 0;

}