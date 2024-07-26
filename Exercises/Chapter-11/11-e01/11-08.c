// pointers and functions

#include <stdio.h>

void test(int *intPtr) {

    *intPtr = 100;

}

int main(void) {

    void test(int *intPtr);

    int i = 50, *p = &i;

    printf("before calling the test function: i = %i\n", i);
    test(p);
    printf("after calling the test function: i = %i\n", i);

    return 0;

}