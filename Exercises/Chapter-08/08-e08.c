// find the real roots of a quadratic equation

#include <stdio.h>

int main(void) {

    double absoluteValue(double x);
    double squareRoot(double x, const double epsilon);
    void solveQuadEq(float a, float b, float c, float d, float x[2]);

    float a, b, c, d, x[2];

    printf("a, b and c coefficients of the equation: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;
    if (d < 0) printf("there are no real roots\n");
    else {
        printf("d = %.3f\n", d);
        solveQuadEq(a, b, c, d, x);
        printf("x1 = %.3f, x2 = %.3f\n", x[0], x[1]);
    }

    return 0;

}

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

    while (absoluteValue(1 - ((guess * guess) / x)) >= epsilon) guess = (x / guess + guess) / 2.0;

    return guess;

}

void solveQuadEq(float a, float b, float c, float d, float x[2]) {  // solve quadratic equation

    x[0] = (-b + squareRoot(d, .00001)) / (2*a);
    x[1] = (-b - squareRoot(d, .00001)) / (2*a);

}