// stringLength function with pointers

#include <stdio.h>

int stringLength(const char *string) {

    const char *cPtr = string;

    while (*cPtr) ++cPtr;

    return cPtr - string;

}

int main(void) {

    int stringLength(const char *string);

    printf("%i  ", stringLength("stringLength test"));
    printf("%i  ", stringLength(""));
    printf("%i\n", stringLength("complete"));

    return 0;

}