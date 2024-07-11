// square root function (Newton–Raphson method), 08-e05 modified

#include <stdio.h>

double absoluteValue(double x) { // calculate absolute value

    if (x < 0) x = -x;

    return x;

}

double squareRoot(double x, const double epsilon) { // calculate square root

    double guess = 1.0;

    if (x < 0) { // check for negative numbers in case of user input
        printf("negative number\n");
        return -1.0;
    }

    while (absoluteValue(1 - ((guess * guess) / x)) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
        printf("%f\n", guess);
    }

    return guess;

}

int main(void) {

    const double epsilon = .00001;

    printf("square root of 2.0 = %f\n", squareRoot(2.0, epsilon));
    printf("square root of 144.0 = %f\n", squareRoot(144.0, epsilon));
    printf("square root of 17.5 = %f\n", squareRoot(17.5, epsilon));

    return 0;

}