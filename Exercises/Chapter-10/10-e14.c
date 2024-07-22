// convert integer to string

#include <stdio.h>

int main(void) {

    void intToStr(int num);

    int nums[] = {0, 1, 10, 25, 95, 100, 456, 1000, 1234, 56789};

    for (int i = 0; i < 10; i++) {
        intToStr(nums[i]);
        //printf("int: %i  str: %s\n", nums[i], numStrings[i]);
    }

    return 0;

}

void intToStr(int num) {

    int iterateDigit(int digit);

    int digits = 0, i, digit;

    for (int tmp = num; tmp > 0; digits++) tmp/=10; // number of digits

    printf("%i -- ", digits);

    while(digits--)
    {
        printf("%ld_", num/iterateDigit(digits)%10);
    }

    printf("\n");

}

int iterateDigit(int digit)
{
    int i = 1;
    while(digit--)
        i *= 10;
    return i;
}