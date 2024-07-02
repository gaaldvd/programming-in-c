// formating output

#include <stdio.h>

int main(void) {

    int dollars, cents, count;

    for (count = 1; count <= 10; count++) {
        printf("amount of dollars: ");
        scanf("%i", &dollars);
        printf("amount of cents: ");
        scanf("%i", &cents);
        printf("$%i.%.2i\n", dollars, cents);
    }

    return 0;

}