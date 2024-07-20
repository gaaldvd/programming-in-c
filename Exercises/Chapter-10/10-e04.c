// extract substring function

#include <stdio.h>

int main(void) {

    void substring(const char source[], int start, int len, char result[]);

    const char string[] = "This is the original string.";
    int start = 8, len = 12;
    char sub[len];

    substring(string, start, len, sub);
    printf("original:  %s\n", string);
    printf("substring: %s\n", sub);

    return 0;

}

void substring(const char source[], int start, int len, char result[]) { // extract a substring from a string

    int stringLength(const char string[]);

    if (start > stringLength(source)) {
        printf("error - invalid start index\n");
        result[0] = '\0';
    }
    else {
        for (int i = 0; i <= len; i++) result[i] = source[i + start];
        result[len] = '\0';
    }

}

int stringLength(const char string[]) { // determine the length of a string

    int count = 0;

    while (string[count] != '\0') count++;

    return count;

}