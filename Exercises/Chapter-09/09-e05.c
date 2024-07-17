// update time and date

#include <stdio.h>
#include <stdbool.h>

struct date {int month, day, year;};
struct time {int hour, minutes, seconds;};
struct dateTime {
    struct date sDate;
    struct time sTime;
};

int main(void) {

    struct dateTime clockKeeper(struct dateTime clock);

    struct dateTime clock = {{7, 17, 2024}, {12, 59, 56}};
    int i;

    for (i = 0; i < 5; i++) {
        clock = clockKeeper(clock);
        printf("%i/%i/%.2i, ", clock.sDate.month, clock.sDate.day, clock.sDate.year % 100);
        printf("%.2i:%.2i:%.2i\n", clock.sTime.hour, clock.sTime.minutes, clock.sTime.seconds);
    }

    printf("-----------------\n");

    clock = (struct dateTime) {{7, 17, 2024}, {23, 59, 56}};
    for (i = 0; i < 5; i++) {
        clock = clockKeeper(clock);
        printf("%i/%i/%.2i, ", clock.sDate.month, clock.sDate.day, clock.sDate.year % 100);
        printf("%.2i:%.2i:%.2i\n", clock.sTime.hour, clock.sTime.minutes, clock.sTime.seconds);
    }

    return 0;

}

struct dateTime clockKeeper(struct dateTime clock) {

    struct date dateUpdate(struct date today);
    struct time timeUpdate(struct time now);

    struct dateTime newClock;

    if (clock.sTime.hour == 23 && clock.sTime.minutes == 59 && clock.sTime.seconds == 59) {
        newClock.sDate = dateUpdate(clock.sDate);
        newClock.sTime = timeUpdate(clock.sTime);
    } else {
        newClock.sDate = clock.sDate;
        newClock.sTime = timeUpdate(clock.sTime);
    }

    return newClock;

}

struct date dateUpdate(struct date today) { // tomorrow's date

    int numberOfDays(struct date d);

    struct date tomorrow;

    if (today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { // end of the year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else { // end of the month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

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

struct time timeUpdate(struct time now) { // increment time with one second

    now.seconds++;
    if (now.seconds == 60) { // next minute
        now.seconds = 0;
        now.minutes++;
        if (now.minutes == 60) { // next hour
            now.minutes = 0;
            now.hour++;
            if (now.hour == 24) now.hour = 0; // midnight
        }
    }

    return now;

}