// dateUpdate function, 09-e06 modified with pointers

#include <stdio.h>
#include <stdbool.h>

struct date {int month, day, year;};

int main(void) {

    void dateUpdate(struct date * const today);

    struct date today;

    printf("today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    dateUpdate(&today);

    printf("tomorrow's date: %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;

}

void dateUpdate(struct date * const today) { // tomorrow's date

    int numberOfDays(struct date d);

    if (today->day != numberOfDays(*today)) *today = (struct date) {today->month, today->day + 1, today->year};
    else if (today->month == 12)  *today = (struct date) {1, 1, today->year + 1}; // end of the year
    else *today = (struct date) {today->month + 1, 1, today->year}; // end of the month

}

int numberOfDays(struct date d) { // number of days in a month

    bool isLeapYear(struct date d);

    int days;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) == true && d.month == 2) days = 29;
    else days = daysPerMonth[d.month - 1];

    return days;

}

bool isLeapYear(struct date d) { // is it a leap year?

    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) leapYearFlag = true; // yes
    else leapYearFlag = false; // no

    return leapYearFlag;

}