// defining a structure

#include <stdio.h>

int main(void) {

    struct date {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 7;
    today.day = 15;
    today.year = 2024;

    printf("today's date: %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;

}