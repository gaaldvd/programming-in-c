// replace string function, exercise 10.8 and 10.9 combined

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int stringLength(const char string[]);
    bool replaceString(char string[], const char s1[], const char s2[]);

    bool stillFound;
    char string[] = "The replaceString function replaces a portion of a string*.";

    printf("%s\n", string);
    if (replaceString(string, "portion", "substring")) printf("%s\n", string);
    else printf("substring not found\n");

    printf("\n%s\n", string);
    if (replaceString(string, "*", "")) printf("%s\n", string);
    else printf("substring not found\n");

    char string2[] = "1";
    printf("\n%s\n", string2);
    if (replaceString(string2, "1", "one")) printf("%s\n", string2);
    else printf("substring not found\n");

    char string3[] = "There are too many spaces in this string.";
    printf("\n%s\n", string3);
    do stillFound = replaceString(string3, " ", "");
    while (stillFound);
    printf("%s\n", string3);

    return 0;

}

int stringLength(const char string[]) { // determine the length of a string

    int count = 0;

    while (string[count] != '\0') count++;

    return count;

}

bool replaceString(char string[], const char s1[], const char s2[]) { // replace a substring in a string

    int findString (const char string[], const char substring[]);
    void removeString(char string[], int start, int len);
    void insertString(char string[], const char substring[], int pos);

    int pos;

    if (findString(string, s1) != -1) {
        pos = findString(string, s1);
        //printf("d1 string: %i pos: %i\n", stringLength(string), pos);
        removeString(string, pos, stringLength(s1));
        //printf("d2 %s %i\n", string, stringLength(string));
        insertString(string, s2, pos);
        //printf("d3 %s %i\n", string, stringLength(string));
        return true;
    } else return false;

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

void removeString(char string[], int start, int len) { // remove a substring from a string

    int i;

    for (i = 0; string[i] != '\0'; i++) {
        if (i < start) string[i] = string[i];
        else string[i] = string[i + len];
    }

    string[i - len] = '\0';

}

void insertString(char string[], const char substring[], int pos) { // insert a substring into a string

    int i, strLen = stringLength(string), subLen = stringLength(substring), holdLen = strLen - pos + 1;
    char holder[holdLen];

    for (i = 0; string[pos + i] != '\0'; i++) holder[i] = string[pos + i];
    holder[holdLen] = '\0';
    for (i = 0; substring[i] != '\0'; i++) string[pos + i] = substring[i];
    for (i = 0; holder[i] != '\0'; i++) string[pos + subLen + i] = holder[i];
    string[strLen + subLen] = '\0';

}