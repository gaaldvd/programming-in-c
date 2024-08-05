// display the combined contents of two files

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *inFile1, *inFile2;
    int c;

    if ((inFile1 = fopen("infile1", "r")) == NULL) {
        printf("can't open %s for reading\n", inFile1);
        exit(EXIT_FAILURE);
    }
    if ((inFile2 = fopen("infile2", "r")) == NULL) {
        printf("can't open %s for reading\n", inFile2);
        exit(EXIT_FAILURE);
    }

    while (1) {
        while ((c = getc(inFile1)) != '\n' && c != EOF) putc(c, stdout);
        if (c != EOF) printf("\n");
        while ((c = getc(inFile2)) != '\n' && c != EOF) putc(c, stdout);
        if (c == EOF) break;
        else printf("\n");
    }

    fclose(inFile1);
    fclose(inFile2);

    return 0;

}