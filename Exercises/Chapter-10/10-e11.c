// convert string to integer, 10-11 modified

#include <stdio.h>

int main(void) {

    int strToInt(const char string[]);

    printf("%i\n", strToInt("-245"));
    printf("%i\n", strToInt("100") + 25);
    printf("%i\n", strToInt("13x5"));

    return 0;

}

int strToInt(const char string[]) { // convert string to integer

    int intValue, result = 0;

    for (int i = (string[0] == '-') ? 1 : 0; string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    return (string[0] == '-') ? -result : result;

}