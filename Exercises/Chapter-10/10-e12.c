// convert string to float

#include <stdio.h>

int main(void) {

    float strToFloat(const char string[]);

    printf("%.3f\n", strToFloat("42"));
    printf("%.4f\n", strToFloat("-867.6921"));
    printf("%.5f\n", strToFloat("2.71828"));
    printf("%.6f\n", strToFloat("3,141592"));

    return 0;

}

float strToFloat(const char string[]) { // convert string to float

    float result;
    int intValue, decValue, intPart = 0, decPart = 0, i, j, n = 1;

    for (i = (string[0] == '-') ? 1 : 0; string[i] >= '0' && string[i] <= '9'; i++) {
        intValue = string[i] - '0';
        intPart = intPart * 10 + intValue;
    }

    for (i++, j = 0; string[i] >= '0' && string[i] <= '9'; i++, j++) {
        decValue = string[i] - '0';
        decPart = decPart * 10 + decValue;
    }

    for (i = 0; i < j; i++) n *= 10;    
    result = (float) intPart + (float) decPart / n;

    return (string[0] == '-') ? -result : result;

}