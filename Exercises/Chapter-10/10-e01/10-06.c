// reading a line of text

#include <stdio.h>

int main(void) {

    void readLine(char buffer[]);

    int i;
    char line[81];

    for (i = 0; i < 3; i++) {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;

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