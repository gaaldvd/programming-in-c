// copying the contents of a file into another

#include <stdio.h>

int main(void) {

    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    printf("enter the name of the original file: "); // you can use 'infile' here
    scanf("%63s", inName);
    printf("enter the name of the new file: ");
    scanf("%63s", outName);

    if ((in = fopen(inName, "r")) == NULL) {
        printf("can't open %s for reading\n", inName);
        return 1;
    }
    if ((out = fopen(outName, "w")) == NULL) {
        printf("can't open %s for writing\n", outName);
        return 2;
    }

    while ((c = getc(in)) != EOF) putc(c, out);

    fclose(in);
    fclose(out);

    printf("copying successful\n");

    return 0;

}