// square root function (Newton–Raphson method)

#include <stdio.h>

float absoluteValue(float x) { // calculate absolute value

    if (x < 0) x = -x;

    return x;

}

float squareRoot(float x) { // calculate square root

    const float epsilon = .00001;
    float guess = 1.0;

    if (x < 0) { // check for negative numbers in case of user input
        printf("negative number\n");
        return -1.0;
    }

    while (absoluteValue(guess * guess - x) >= epsilon) guess = (x / guess + guess) / 2.0;

    return guess;

}

int main(void) {

    printf("square root of 2.0 = %f\n", squareRoot(2.0));
    printf("square root of 144.0 = %f\n", squareRoot(144.0));
    printf("square root of 17.5 = %f\n", squareRoot(17.5));

    return 0;

}