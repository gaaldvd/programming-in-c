// sorting function, 08-e13 modified with pointers

#include <stdio.h>

int main(void) {

    void sort(int *array, int n, char order);

    int i, array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
    char order;

    printf("unsorted array: ");
    for (i = 0; i < 16; i++) printf("%i ", array[i]);
    printf("\n");

    do {
        printf("sorting order (a/d): ");
        scanf(" %c", &order); // the space before the format specifier negates the newline character
    } while (order != 'a' && order != 'd');

    sort(array, 16, order);
    printf("sorted array: ");
    for (i = 0; i < 16; i++) printf("%i ", array[i]);
    printf("\n");

    return 0;

}

void sort(int *array, int n, char order) { // sort an array of n integers, in asc. or desc. order

    int temp, *next;
    int const *end = array + n;

    for ( ; array < end; array++) {
        next = array + 1;
        for ( ; next < end; next++) {
            if (order == 'a') {
                if (*array > *next) {
                    temp = *array;
                    *array = *next;
                    *next = temp;
                }
            } else
                if (*array < *next) {
                    temp = *array;
                    *array = *next;
                    *next = temp;
                }
        }
    }

}