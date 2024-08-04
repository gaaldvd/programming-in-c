// redirecting input

#include <stdio.h>

int main(void) { // run in terminal: ./16-02 < infile

    int c;

    while ((c = getchar()) != EOF) putchar(c);

    return 0;

}