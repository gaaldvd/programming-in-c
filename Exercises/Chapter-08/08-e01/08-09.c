// minimum function

#include <stdio.h>

int minimum(int values[10]) {

    int minValue = values[0], i;

    for (i = 1; i < 10; i++) if (values[i] < minValue) minValue = values[i];

    return minValue;

}

int main(void) {

    int scores[10], i, minScore;
    int minimum(int values[10]);

    printf("enter 10 scores:\n");
    for (i = 0; i < 10; i++) scanf("%i", &scores[i]);

    minScore = minimum(scores);
    printf("\nthe minimum score: %i\n", minScore);

    return 0;

}