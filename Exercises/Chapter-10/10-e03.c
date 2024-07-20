// count the number of words in a line, 10-07 modified

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int countWords(const char string[]);

    const char text1[] = "What\'s the sum of 5.0 and -10.0\?";
    const char text2[] = "It\'s -5,0.";

    printf("%s - number of words: %i\n", text1, countWords(text1));
    printf("%s - number of words: %i\n", text2, countWords(text2));

    return 0;

}

bool validChar(const char s[], int i) { // is the character valid (alphabetic, numerical or apostrophe)?

    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) return true; // alphabetic?
    else if ((s[i] >= '0' && s[i] <= '9') || 
            (s[i] == '.' || s[i] == ',' || s[i] == '-') && (s[i + 1] >= '0' && s[i + 1] <= '9')) return true; // numerical?
    else if (s[i] == '\'') return true; // apostrophe?
    else return false;

}

int countWords(const char string[]) { // count words in a string

    bool validChar(const char s[], int i);

    int i, wordCount = 0;
    bool lookingForWord = true;

    for (i = 0; string[i] != '\0'; i++)
        if (validChar(string, i)) {
            if (lookingForWord) {
                wordCount++;
                lookingForWord = false;
            }
        } else lookingForWord = true;

    return wordCount;

}