// equality of two strings

#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[]) {

    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') i++;
    if (s1[i] == '\0' && s2[i] == '\0') areEqual = true;
    else areEqual = false;

    return areEqual;

}

int main(void) {

    bool equalStrings(const char s1[], const char s2[]);

    const char strA[] = {"string compare test"};
    const char strB[] = {"string"};

    printf("%i\n", equalStrings(strA, strB));
    printf("%i\n", equalStrings(strA, strA));
    printf("%i\n", equalStrings(strB, "string"));

    return 0;

}