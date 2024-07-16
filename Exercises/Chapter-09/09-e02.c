// number of days between two dates

#include <stdio.h>

struct date {int month, day, year;};

int main(void) {

    int dateNum(struct date d);

    struct date firstDate, secondDate;

    printf("first date (mm dd yyyy): ");
    scanf("%i%i%i", &firstDate.month, &firstDate.day, &firstDate.year);
    printf("second date (mm dd yyyy): ");
    scanf("%i%i%i", &secondDate.month, &secondDate.day, &secondDate.year);

    if (dateNum(secondDate) < 621048 || dateNum(firstDate) < 621048) {
        printf("date must be at least 3/1/1700\n");
        return -1;
    }

    int diff = dateNum(secondDate) - dateNum(firstDate);
    printf("difference: %i days\n", (diff < 0) ? -diff : diff);

    return 0;

}

int dateNum(struct date d) {

    int N, f = (d.month <= 2) ? d.year - 1 : d.year, g = (d.month <= 2) ? d.month + 13 : d.month + 1;

    N = 1461 * f / 4 + 153 * g / 5 + d.day;

    if (N >= 657573 && N <= 694096) N += 1; // between 3/1/1800 and 2/28/1900
    else if (N >= 621048 && N <= 657571) N += 2; // between 3/1/1700 and 2/28/1800

    return N;

}