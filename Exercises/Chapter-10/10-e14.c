// convert integer to string

#include <stdio.h>
#include <stdbool.h>

char string[] = "";

int main(void) {

    void intToStr(int num);

    int nums[] = {0, -1, 10, -23, 100, -456, 1000, -78900}, j;

    for (int i = 0; i < 8; i++) {
        intToStr(nums[i]);
        printf("int: %i\nstr: %s\n\n", nums[i], string);
    }

    return 0;

}

void intToStr(int num) { // convert an integer to a string

    int digits = 0, digit, digitInt, digitCount, i, j = 0;
    bool isNegative = false;

    if (num < 0) {
        isNegative = true;
        num *= -1;
        j++;
        string[0] = '-';
    }

    if (num == 0) {
        digitCount = 1;
        string[0] = '0';
    } else {
        for (int tmp = num; tmp > 0; digits++) tmp /= 10; // number of digits
        digitCount = digits;
        while(digits--) { // iterate through digits
            i = 1;
            digit = digits;
            while (digit--) i *= 10;
            digitInt = num / i % 10;
            string[j] = 48 + digitInt;
            j++;
        }
    }

    if (isNegative) string[digitCount + 1] = '\0';
    else string[digitCount] = '\0';

}