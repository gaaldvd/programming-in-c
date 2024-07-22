// remove substring function

#include <stdio.h>

int main(void) {

    void removeString(char string[], int start, int len);

    char string[] = "The removeString function removes a substring from a string.";
    int start = 10, len = 6;

    printf("%s\n", string);
    for (int i = 0; string[i] != '\0'; i++) (i < start || i >= start + len) ? printf(" ") : printf("-");
    removeString(string, 10, 6);
    printf("\n%s\n", string);

    return 0;

}

void removeString(char string[], int start, int len) { // remove a substring from a string

    int i;

    for (i = 0; string[i] != '\0'; i++) {
        if (i < start) string[i] = string[i];
        else string[i] = string[i + len];
    }

    string[i - len] = '\0';

}