// copying the contents of a file into another

#include <stdio.h>

int main(void) {

    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    printf("enter the name of the original file: ");
    scanf("%63s", inName);
    printf("enter the name of the new file: ");
    scanf("%63s", outName);

    if ((in = fopen(inName, "r")) == NULL) {
        printf("%s can't be opened in read mode\n", inName);
        return 1;
    }
    if ((out = fopen(outName, "w")) == NULL) {
        printf("%s can't be opened in write mode\n", outName);
        return 2;
    }

    while ((c = getc(in)) != EOF) putc(c, out);

    fclose(in);
    fclose(out);

    printf("copying successful\n");

    return 0;

}