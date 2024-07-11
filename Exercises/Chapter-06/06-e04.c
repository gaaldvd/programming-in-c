// simple calculator

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    float num, mem = 0;
    char op;
    bool done = false;

    printf("begin calculations...\n");

    while (!done) {

        /* the loop breaks if the input for num is not a number! 
           the input has to be like this: number<space>operator */

        scanf("%f %c", &num, &op);
        switch (op) {
            case '+':
                mem += num;
                break;
            case '-':
                mem -= num;
                break;
            case '*':
            case 'x':
            case 'X':
                mem *= num;
                break;
            case '/':
                if (num) {
                    mem /= num;
                    break;
                }
                else {
                    printf("zero division\n");
                    break;
                }
            case 's':
            case 'S':
                mem = num;
                break;
            case 'e':
            case 'E':
                done = true;
                break;
            default:
                printf("unknown operator (%c)\n", op);
                break;
        }
        printf("= %.3f\n", mem);
    }

    printf("\nresult: %f\n", mem);

    return 0;

}