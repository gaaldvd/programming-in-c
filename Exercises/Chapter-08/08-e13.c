// sorting function, 08-12 modified

#include <stdio.h>

int main(void) {

    void sort(int a[], int n, char order);

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

void sort(int a[], int n, char order) {

    int i, j, temp;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (order == 'a') {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            } else {
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }

}