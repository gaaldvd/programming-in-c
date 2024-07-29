// readLine function, 10-06 modified with pointers

#include <stdio.h>

int main(void) {

    void readLine(char *buffer);

    char text[81];

    for (int i = 0; i < 3; i++) {
        readLine(text);
        printf("%s\n\n", text);
    }

    return 0;

}

void readLine(char *buffer) { // read a line of text from the terminal

    char character;

    do {
        character = getchar();
        *buffer++ = character;
    } while (character != '\n');

    *--buffer = '\0';

}