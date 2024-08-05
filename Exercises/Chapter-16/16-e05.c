// display part of every line of a file

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *inFile;
    int m, n, i, c;

    if ((inFile = fopen("infile1", "r")) == NULL) {
        printf("can't open %s for reading\n", inFile);
        exit(EXIT_FAILURE);
    }

    printf("display part of every line from the m. character to the n. character\n");
    do {
        printf("[m n]: ");
        scanf("%i%i", &m, &n);
        if (m > n) printf("m (%i) can't be greater than n (%i)\n", m, n);
    } while (m > n);

    while (!feof(inFile)) {
        for (i = 1; ((c = getc(inFile)) != '\n' && c != EOF); i++) if (i >= m && i <= n) putc(c, stdout);
        if (c != EOF) printf("\n");
    }

    fclose(inFile);

    return 0;

}