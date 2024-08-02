// monthName function

#include <stdio.h>

enum month {january = 1, february, march, april, may, june, july, august, september, october, november, december};

int main(void) {

    char * monthName(enum month aMonth);

    enum month aMonth;

    printf("enter the number of the month: ");
    scanf("%i", &aMonth);
    printf("%s\n", monthName(aMonth));

    return 0;

}

char * monthName(enum month aMonth) {

    switch (aMonth) {
        case january:   return "january";
        case february:  return "february";
        case march:     return "march";
        case april:     return "april";
        case may:       return "may";
        case june:      return "june";
        case july:      return "july";
        case august:    return "august";
        case september: return "september";
        case october:   return "october";
        case november:  return "november";
        case december:  return "december";
        default:        return "invalid month";
    }

}