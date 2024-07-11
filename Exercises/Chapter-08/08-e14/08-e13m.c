// sorting function, modified 08-e13 with global variables

#include <stdio.h>

int n = 16;
int a[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
char order;

int main(void) {

    void sort(void);

    int i;

    printf("unsorted array: ");
    for (i = 0; i < n; i++) printf("%i ", a[i]);
    printf("\n");

    do {
        printf("sorting order (a/d): ");
        scanf(" %c", &order); // the space before the format specifier negates the newline character
    } while (order != 'a' && order != 'd');

    sort();
    printf("sorted array: ");
    for (i = 0; i < n; i++) printf("%i ", a[i]);
    printf("\n");

    return 0;

}

void sort(void) {

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