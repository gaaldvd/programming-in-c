// Fibonacci numbers with variable length arrays

#include <stdio.h>

int main(void) {

    int i, numFibonacci;

    printf("how many Fibonacci-numbers (between 1 and 75): ");
    scanf("%i", &numFibonacci);

    if (numFibonacci < 1 || numFibonacci > 75) {
        printf("wrong number\n");
        return 1;
    }

    unsigned long long int fibonacci[numFibonacci];

    fibonacci[0] = 0, fibonacci[1] = 1; // by definition

    for (i = 2; i < numFibonacci; i++) fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    for (i = 0; i < numFibonacci; i++) printf("%llu ", fibonacci[i]);

    printf("\n");

    return 0;

}