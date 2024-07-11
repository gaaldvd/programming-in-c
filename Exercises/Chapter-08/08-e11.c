// sum function

#include <stdio.h>

int main(void) {

    int n;

    int arraySum(int array[], int n);

    printf("number of elements: ");
    scanf("%i", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("%i. element: ", i + 1);
        scanf("%i", &array[i]);
    }

    printf("sum: %i\n", arraySum(array, n));

    return 0;

}

int arraySum(int array[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) sum += array[i];

    return sum;

}