#include <stdio.h>

int main(void) {

    float n, m = 0;
    char o = ' ';

    while (o != 'e') {        
        printf("n o: ");
        scanf("%f %c", &n, &o);
        switch (o) {
            case '+':
                m += n;
                printf("= %.3f\n", m);
                break;
            case '-':
                m -= n;
                printf("= %.3f\n", m);
                break;
            case '*':
                m *= n;
                printf("= %.3f\n", m);
                break;
            case '/':
                if (n) {
                    m /= n;
                    printf("= %.3f\n", m);
                }
                else {
                    printf("zero division!\n");
                    continue;
                }
                break;
            case 's':
                m = n;
                printf("= %.3f\n", m);
                break;
            case 'e':
                break;
            default:
                printf("unknown operator (%c)!\n", o);
                continue;
                break;
        }
    }

    printf("m = %f\n", m);

    return 0;
}