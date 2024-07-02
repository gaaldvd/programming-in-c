// comments

/* Adding up two integers
and displaying the result. */

#include <stdio.h>

int main(void) {

    // declare variables
    int value1, value2, sum;

    // assign values and calculate sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    // display the result
    printf("the sum of %i and %i is %i\n", value1, value2, sum);

    return 0;

}