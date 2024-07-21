// insert substring function

#include <stdio.h>

int main(void) {

    void insertString(char string[], char substring[], int pos);

    char string[] = "The inserString function inserts a string into a string.";
    char substring[] = "sub";
    int pos = 35;

    printf("%s\n", string);
    for (int i = 0; string[i] != '\0'; i++) (i < pos || i >= pos + 3) ? printf(" ") : printf("+");
    insertString(string, substring, pos);
    printf("\n%s\n", string);

    return 0;

}

void insertString(char string[], char substring[], int pos) { // insert a substring into a string

    int i, j = 0;
    char c;

    for (i = 0; substring[i] != '\0'; i++) {
        for (j = 0; string[pos + j] != '\0'; j++) {
            
        }
        string[pos] = substring[i];
        pos++;
    }

    // for (i = 0; string[i] != '\0'; i++) {
    //     if ((i == pos + j) && (substring[j] != '\0')) {
    //         c = string[i];
    //         string[i] = substring[j];
    //         j++;
    //     }
    // }

    //printf("%s", substitue);
    
    //string[59] = '\0';

}