// insert substring function

#include <stdio.h>

int main(void) {

    void insertString(char string[], const char substring[], int pos);

    char string[] = "The insertString function inserts a string into a string.";
    const char substring[] = "sub";
    int pos = 36;

    printf("%s\n", string);
    for (int i = 0; string[i] != '\0'; i++) (i < pos || i >= pos + 3) ? printf(" ") : printf("+");
    insertString(string, substring, pos);
    printf("\n%s\n", string);

    return 0;

}

void insertString(char string[], const char substring[], int pos) { // insert a substring into a string

    int stringLength(const char string[]);

    int i, strLen = stringLength(string), subLen = stringLength(substring), holdLen = strLen - pos + 1;
    char holder[holdLen];

    for (i = 0; string[pos + i] != '\0'; i++) holder[i] = string[pos + i];
    holder[holdLen] = '\0';
    for (i = 0; substring[i] != '\0'; i++) string[pos + i] = substring[i];
    for (i = 0; holder[i] != '\0'; i++) string[pos + subLen + i] = holder[i];
    string[strLen + subLen] = '\0';

}

int stringLength(const char string[]) { // determine the length of a string

    int count = 0;

    while (string[count] != '\0') count++;

    return count;

}