// calling a function multiple times, 08-01 modified

#include <stdio.h>

void printMessage(void) {

    printf("Programming is fun.\n");

}

int main(void) {

    for (int i = 1; i <=5; i++) printMessage();

    return 0;

}