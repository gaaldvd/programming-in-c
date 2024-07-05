// conversion of positive integer to another base

/* some weak spots:
1. there is no check if the base is indeed between 2 and 16
2. if the input for the base is 0, the division on line 27 gives an error
3. if the input is 1 the conversion loop runs infinitely
4. or, if it is more than 16 the index runs out of the limits of the array
(there is a version in chapter 8 with the solutions) */

#include <stdio.h>

int main(void) {

    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int convertedNumber[64], nextDigit, base, index = 0;
    long int numberToConvert;

    // input number and base
    printf("number to convert: ");
    scanf("%ld", &numberToConvert);
    printf("base: ");
    scanf("%i", &base);

    // convert to the input base
    do {
        convertedNumber[index] = numberToConvert % base;
        index++;
        numberToConvert /= base;
    } while (numberToConvert);

    // display converted number
    printf("converted number: ");

    for (index--; index >= 0; index--) {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");

    return 0;

}