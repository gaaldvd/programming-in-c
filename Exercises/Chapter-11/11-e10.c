// compareStrings function, 10-10 modified with pointers

#include <stdio.h>

int main(void) {

    int compareStrings(const char *s1, const char *s2);

    int results[3];
    char *s1 = "This is A string.";
    char *s2 = "This is B string.";

    results[0] = compareStrings(s1, s2);
    results[1] = compareStrings(s2, s1);

    if (results[0] == -1) printf("%s < %s\n", s1, s2);
    else if (results[0] == 0) printf("%s = %s\n", s1, s2);
    else if (results[0] == 1) printf("%s > %s\n", s1, s2);
    else printf("something went wrong\n");

    if (results[1] == -1) printf("%s < %s\n", s2, s1);
    else if (results[1] == 0) printf("%s = %s\n", s2, s1);
    else if (results[1] == 1) printf("%s > %s\n", s2, s1);
    else printf("something went wrong\n");

    s1 = "These two are the same.";
    s2 = "These two are the same.";

    results[2] = compareStrings(s1, s2);

    if (results[2] == -1) printf("%s < %s\n", s1, s2);
    else if (results[2] == 0) printf("%s = %s\n", s1, s2);
    else if (results[2] == 1) printf("%s > %s\n", s1, s2);
    else printf("something went wrong\n");

    return 0;

}

int compareStrings(const char *s1, const char *s2) { // compare two strings

    int i = 0, answer;

    while (*s1++ == *s2++ && *(s1 + 1) && *(s2 + 1))

    if (*s1 < *s2) answer = -1;         // s1 < s2
    else if (*s1 == *s2) answer = 0;    // s1 == s2
    else answer = 1;                        // s1 > s2

    return answer;

}