// average of grades, number of failing grades

#include <stdio.h>

int main(void) {

    int numberOfGrades, i, grade, gradeTotal = 0, failureCount = 0;
    float average;

    printf("number of grades: ");
    scanf("%i", &numberOfGrades);

    for (i = 1; i <= numberOfGrades; i++) {
        printf("%i. grade: ", i);
        scanf("%i", &grade);

        gradeTotal += grade;

        if (grade < 65) failureCount++;
    }

    average = (float) gradeTotal / numberOfGrades;

    printf("\ngrade average: %.2f\n", average);
    printf("number of failures: %i\n", failureCount);

    return 0;

}