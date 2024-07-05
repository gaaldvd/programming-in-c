// initializing arrays

#include <stdio.h>

int main(void) {

    int i, arrayValues[10] = {0, 1, 4, 9, 16};

    for (i = 5; i < 10; i++) arrayValues[i] = i * i;
    for (i = 0; i < 10; i++) printf("arrayValues[%i] = %i\n", i, arrayValues[i]);

    return 0;

}