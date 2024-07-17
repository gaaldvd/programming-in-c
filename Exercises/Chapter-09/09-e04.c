// determine what day is a certain date

#include <stdio.h>

struct date {int month, day, year;};

int main(void) {

    int dateNum(struct date d);

    struct date dateInput;

    printf("date (mm dd yyyy): ");
    scanf("%i%i%i", &dateInput.month, &dateInput.day, &dateInput.year);

    if (dateNum(dateInput) < 621048) {
        printf("date must be at least 3/1/1700\n");
        return -1;
    }

    int N = dateNum(dateInput);
    int dayNum = (N - 621049) % 7;

    switch (dayNum)
    {
    case 0:
        printf("sunday\n");
        break;
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    default:
        printf("invalid dayNum\n");
        return -1;
        break;
    }

    return 0;

}

int dateNum(struct date d) {

    int N, f = (d.month <= 2) ? d.year - 1 : d.year, g = (d.month <= 2) ? d.month + 13 : d.month + 1;

    N = 1461 * f / 4 + 153 * g / 5 + d.day;

    if (N >= 657573 && N <= 694096) N += 1; // between 3/1/1800 and 2/28/1900
    else if (N >= 621048 && N <= 657571) N += 2; // between 3/1/1700 and 2/28/1800

    return N;

}