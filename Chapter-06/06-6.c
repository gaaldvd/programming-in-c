#include <stdio.h>

int main(void) {

    int input, revInput, n, d;

    printf("n: ");
    scanf("%i", &input);

    do {
        revInput *= 10;
        revInput = revInput + input % 10;
        input /= 10;
        n++;
    } while (input);

    do {
        d = revInput % 10;
        revInput /= 10;
        n--;

        switch (d)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
    } while (n);

    printf("\n");

    return 0;
}