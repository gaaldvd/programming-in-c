// categorize a single character

#include <stdio.h>

int main(void) {

    char c;

    printf("character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("it's a letter\n");
    else if (c >= '0' && c <= '9') printf("it's a digit\n");
    else printf("it's a special character\n");

    return 0;

}