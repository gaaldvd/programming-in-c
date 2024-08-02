// defining a function pointer type

#include <stdio.h>

int main(void) {

    int doNothing(void);

    typedef int (*FunctionPtr)(void);

    FunctionPtr fnPtr = doNothing;

    printf("do nothing!\n");
    int x = fnPtr();
    (x == 1) ? printf("done\n") : printf("done something\n");

    return 0;

}

int doNothing(void) {

    printf("doing nothing...\n");

    return 1;

}