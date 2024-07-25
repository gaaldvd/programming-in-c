// pointer basics

#include <stdio.h>

int main(void) {

    char c =  'Q';
    char *charPtr = &c;

    printf("%c %c\n", c, *charPtr);

    c = '/';
    printf("%c %c\n", c, *charPtr);

    *charPtr = '(';
    printf("%c %c\n", c, *charPtr);

    return 0;

}