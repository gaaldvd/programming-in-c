// conversion of positive integer of base ten to another base, 07-07 modified

#include <stdio.h>

int convertedNumber[64], base, digit = 0;
long int numberToConvert;

void getNumberAndBase(void) { // input number and base

    printf("number to convert: ");
    scanf("%ld", &numberToConvert);
    printf("base: ");
    scanf("%i", &base);

    if (base < 2 || base > 16) {
        printf("base must be between 2 and 16\n");
        base = 10;
    }

}

void convertNumber(void) { // convert to the input base

    do {
        convertedNumber[digit] = numberToConvert % base;
        digit++;
        numberToConvert /= base;
    } while (numberToConvert);

}

void displayConvertedNumber(void) { // display converted number

    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int nextDigit;

    printf("converted number: ");

    for (digit--; digit >= 0; digit--) {
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");

}

int main(void) {

    void getNumberAndBase(void), convertNumber(void), displayConvertedNumber(void);

    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();

    return 0;

}