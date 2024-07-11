// counter array

#include <stdio.h>

int main(void) {

    int ratingCounters[11], i, response;

    for (i = 1; i <= 10; i++) ratingCounters[i] = 0;

    printf("enter responses:\n");

    for (i = 1; i <= 20; i++) {
        scanf("%i", &response);
        if (response < 1 || response > 10) printf("invalid response: %i\n", response);
        else ratingCounters[response]++;
    }

    printf("\n\nrating  responses\n");
    printf("------  ---------\n");

    for (i = 1; i <= 10; i++) printf("%4i     %4i\n", i, ratingCounters[i]);

    return 0;

}