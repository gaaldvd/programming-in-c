// evaluate simple expression with switch-case, 06-08A modified

#include <stdio.h>

int main(void) {

    float value1, value2;
    char operator;

    printf("expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator) {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
        case 'x':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0) printf("division by zero\n");
            else printf("%.2f\n", value1 / value2);
            break;    
        default:
            printf("unknown operator\n");
            break;
    }

    return 0;

}