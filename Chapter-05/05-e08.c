// amount of triangular numbers by user input, 05-05 modified

#include <stdio.h>

int main(void) {

    int amount, number, triNum;

    printf("how many triangular numbers: ");
    scanf("%i", &amount);

    for (int i = 1; i <= amount; i++) {
        printf("which triangular number: ");
        scanf("%i", &number);
        triNum = 0;

        for (int j = 1; j <= number; j++) triNum += j;

        printf("triangular number %i: %i\n", number, triNum);
    }

    return 0;

}