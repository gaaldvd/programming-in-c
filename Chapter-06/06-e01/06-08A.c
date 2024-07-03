// evaluate simple expression, 06-08 modified

#include <stdio.h>

int main(void) {

    float value1, value2;
    char operator;

    printf("expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);

    if (operator == '+') printf("%.2f\n", value1 + value2);
    else if (operator == '-') printf("%.2f\n", value1 - value2);
    else if (operator == '*') printf("%.2f\n", value1 * value2);
    else if (operator == '/')
        if (value2 == 0) printf("division by zero\n");
        else printf("%.2f\n", value1 / value2);
    else printf("unknown operator\n");

    return 0;

}