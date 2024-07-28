// arraySum function with pointers, 11-11 modified

#include <stdio.h>

int arraySum(int *array, const int n) {

    int sum = 0;
    int * const arrayEnd = array + n;

    for ( ; array < arrayEnd; array++) sum += *array;

    return sum;

}

int main(void) {

    int arraySum(int *array, const int n);

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("sum: %i\n", arraySum(values, 10));

    return 0;

}