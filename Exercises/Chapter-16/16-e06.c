// display contents of a file by groups of 20 lines

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *inFile;
    int next, i;
    char *s;

    if ((inFile = fopen("longtext", "r")) == NULL) {
        printf("can't open %s for reading\n", inFile);
        exit(EXIT_FAILURE);
    }

    while (!feof(inFile)) { // length of lines is limited to 85 characters!
        printf("\n");
        for (i = 1; i <= 20; i++) {
            if (fgets(s, 85, inFile) != NULL) printf("%s", s);
            else break;
        }
        printf("\npress [q] to quit or any other key to continue ");
        if ((next = getchar()) == 'q') break;
    }

    fclose(inFile);

    return 0;

}