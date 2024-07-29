// sort3 function

#include <stdio.h>

int main(void) {

    void sort3(int *a, int *b, int *c);

    int x = 10, y = -10, z = 0;

    printf("unsorted: %i %i %i\n", x, y, z);
    sort3(&x, &y, &z);
    printf("sorted: %i %i %i\n", x, y, z);

    return 0;

}

void sort3(int *a, int *b, int *c) { // sorting three integers in ascending order

    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

}