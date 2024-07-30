// tomorrow's date, 09-04 modified

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void) {

    struct date dateUpdate(struct date today);

    struct date thisDay, nextDay;

    printf("today's date (mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("tomorrow's date: %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

    return 0;

}

struct date dateUpdate(struct date today) { // tomorrow's date

    int numberOfDays(struct date d);

    struct date tomorrow;

    if (today.day != numberOfDays(today)) tomorrow = (struct date) {today.month, today.day + 1, today.year};
    else if (today.month == 12) tomorrow = (struct date) {1, 1, today.year + 1}; // end of the year
    else tomorrow = (struct date) {today.month + 1, 1, today.year}; // end of the month

    return tomorrow;

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