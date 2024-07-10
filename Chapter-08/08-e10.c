// determine if a number is a prime

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool isPrime(int n);

    int n;

    printf("enter a positive integer: ");
    scanf("%i", &n);
    if (n <= 0) printf("you must enter a positive integer\n");
    else isPrime(n) ? printf("%i is a prime\n", n) : printf("%i is not a prime\n", n);

    return 0;

}

bool isPrime(int n) {

    static int i = 2;

    if (n == 0 || n == 1) return false;
    if (n == i) return true;
    if (n % i == 0) return false;

    i++;

    return isPrime(n);

}