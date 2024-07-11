// sum function, modified 08-e11 with global variables

#include <stdio.h>

int n = 5;
int array[5]; // variably modified array can't be at file scope

int main(void) {

    int arraySum(void);

    for (int i = 0; i < n; i++) {
        printf("%i. element: ", i + 1);
        scanf("%i", &array[i]);
    }

    printf("sum: %i\n", arraySum());

    return 0;

}

int arraySum(void) {

    int sum = 0;

    for (int i = 0; i < n; i++) sum += array[i];

    return sum;

}