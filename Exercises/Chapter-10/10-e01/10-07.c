// count the number of words in a line

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c) { // is the character alphabetic?

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
    else return false;

}

int countWords(const char string[]) { // count words in a string

    bool alphabetic(const char c);

    int i, wordCount = 0;
    bool lookingForWord = true;

    for (i = 0; string[i] != '\0'; i++)
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                wordCount++;
                lookingForWord = false;
            }
        } else lookingForWord = true;

    return wordCount;

}

int main(void) {

    int countWords(const char string[]);

    const char text1[] = "This function counts the number of words.";
    const char text2[] = "And the results can be... Well, output.";

    printf("%s - number of words: %i\n", text1, countWords(text1));
    printf("%s - number of words: %i\n", text2, countWords(text2));

    return 0;

}