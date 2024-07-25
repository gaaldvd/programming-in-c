// pointers referencing structures

#include <stdio.h>

int main(void) {

    struct date {int month, day, year;};

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 7; // (*datePtr).month
    datePtr->day = 25;
    datePtr->year = 2024;

    printf("today's date: %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);

    return 0;

}