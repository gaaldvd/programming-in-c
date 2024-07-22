// find substring function

#include <stdio.h>

int main(void) {

    int findString (const char string[], const char substring[]);

    const char string[] = "The findString function looks for substrings.";
    const char substring[] = "String";

    int pos = findString(string, substring);

    printf("%s\n", string);
    if (pos == -1) printf("substring \'%s\' can't be found\n", substring);
    else {
        for (int i = 0; i <= pos; i++) (i < pos) ? printf(" ") : printf("%i\n", pos);
        for (int i = 0; i <= pos; i++) (i < pos) ? printf(" ") : printf("%s\n", substring);
    }

    return 0;

}

int findString (const char string[], const char substring[]) { // find the first appearance of a substring

    int pos;

    for (int i = 0; string[i] != '\0'; i++) {
        pos = i;
        for (int j = 0; substring[j] != '\0'; j++)
            if ((substring[j] == string[i + j]) && (substring[j + 1] != '\0')) continue;
            else if ((substring[j] == string[i + j]) && (substring[j + 1] == '\0')) return pos;
            else break;
    }

    return -1;

}