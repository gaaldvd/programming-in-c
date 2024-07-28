// copyString function with pointers, 11-13 modified

#include <stdio.h>

void copyString(char *to, char *from) {

    while (*from) *to++ = *from++;

    *to = '\0';

}

int main(void) {

    void copyString(char *to, char *from);

    char string1[] = "A string to copy.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "And another one.");
    printf("%s\n", string2);

    return 0;

}