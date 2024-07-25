// declaring pointers

#include <stdio.h>

int main(void) {

    int count = 10, x, *intPtr;

    intPtr = &count;
    x = *intPtr;

    printf("count = %i, x = %i\n", count, x);

    return 0;

}