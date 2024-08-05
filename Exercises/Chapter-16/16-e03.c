// copying and modifing contents of a file

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char upperCase(char c);

    FILE *lower, *upper;
    int c;

    if ((lower = fopen("lowercase", "r")) == NULL) {
        printf("can't open %s for reading\n", lower);
        exit(EXIT_FAILURE);
    }
    if ((upper = fopen("uppercase", "w")) == NULL) {
        printf("can't open %s for writing\n", upper);
        exit(EXIT_FAILURE);
    }

    while ((c = upperCase(getc(lower))) != EOF) putc(c, upper);

    fclose(lower);
    fclose(upper);

    printf("copying successful\n");

    return 0;

}

char upperCase(char c) { // convert a character to upper case

    return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;

}