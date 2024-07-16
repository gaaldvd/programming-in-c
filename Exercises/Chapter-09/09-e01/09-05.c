// increment time

#include <stdio.h>

struct time {
    int hour, minutes, seconds;
};

int main(void) {

    struct time timeUpdate(struct time now);

    struct time currentTime, nextTime;

    printf("current time (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("the next second: %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;

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