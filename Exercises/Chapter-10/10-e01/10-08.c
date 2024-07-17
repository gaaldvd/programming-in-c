// count the number of words in a text

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c) { // is the character alphabetic?

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
    else return false;

}

void readLine(char buffer[]) { // function to read a line of text from the terminal

    char character;
    int i = 0;

    do {
        character = getchar();
        buffer[i] = character;
        i++;
    } while (character != '\n');

    buffer[i - 1] = '\0';

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
    void readLine(char buffer[]);
    
    char text[81]; // stack smashing if the text is longer than 81 characters
    int totalWords = 0;
    bool endOfText = false;

    printf("enter the text (press 'return' when done):\n\n");

    while (!endOfText) {
        readLine(text);
        if (text[0] == '\0') endOfText = true;
        else totalWords += countWords(text);
    }

    printf("\nthe text has %i words\n", totalWords);

    return 0;

}