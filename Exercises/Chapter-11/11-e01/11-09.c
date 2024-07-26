// changing values from functions with pointers

#include <stdio.h>

void exchange(int * const intPtr1, int * const intPtr2) {

    int temp;

    temp = *intPtr1;
    *intPtr1 = *intPtr2;
    *intPtr2 = temp;

}

int main(void) {

    void exchange(int * const intPtr1, int * const intPtr2);

    int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(p1, p2);
    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(&i1, &i2);
    printf("i1 = %i, i2 = %i\n", i1, i2);

    return 0;

}