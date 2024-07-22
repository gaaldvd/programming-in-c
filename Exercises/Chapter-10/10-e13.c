// uppercase function

#include <stdio.h>

int main(void) {

    char upperCase(char c);
    void stringUpperCase(char string[]);

    char string1[] = "The upperCase function converts characters to upper case.";
    char string2[] = "The stringUpperCase function converts a string to upper case.";

    printf("%s\n", string1);
    for (int i = 0; string1[i] != '\0'; i++) string1[i] = upperCase(string1[i]);
    printf("%s\n", string1);

    printf("\n%s\n", string2);
    stringUpperCase(string2);
    printf("%s\n", string2);

    return 0;

}

char upperCase(char c) { // convert a character to upper case

    return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c;

}

void stringUpperCase(char string[]) { // convert a string to upper case

    for (int i = 0; string[i] != '\0'; i++)
        string[i] = (string[i] >= 'a' && string[i] <= 'z') ? string[i] - 'a' + 'A' : string[i];

}