// elapsed time

#include <stdio.h>

struct time {int hour, minutes, seconds;};

int main(void) {

    struct time elapsedTime(struct time t1, struct time t2);

    struct time time1, time2, diff;

    printf("t1 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
    printf("t2 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

    if (time1.hour < 0 || time1.hour > 24 || time2.hour < 0 || time2.hour > 24 || 
        time1.minutes < 0 || time1.minutes > 60 || time2.minutes < 0 || time2.minutes > 60 || 
        time1.seconds < 0 || time1.seconds > 60 || time2.seconds < 0 || time2.seconds > 60) {
            printf("time invalid\n");
            return -1;
        }

    diff = elapsedTime(time1, time2);
    printf("elapsed time:  %.2i:%.2i:%.2i\n", diff.hour, diff.minutes, diff.seconds);

    return 0;

}

struct time elapsedTime(struct time t1, struct time t2) {

    const int maxSeconds = 24 * 60 * 60;

    struct time diff;
    int t1Seconds = t1.hour * 60 * 60 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hour * 60 * 60 + t2.minutes * 60 + t2.seconds;
    int diffSeconds;

    diffSeconds = (t1Seconds < t2Seconds) ? t2Seconds - t1Seconds : (maxSeconds - t1Seconds) + t2Seconds;

    diff.hour = diffSeconds / (60 * 60);
    diff.minutes = (diffSeconds % (60 * 60)) / 60;
    diff.seconds = (diffSeconds % (60 * 60)) % 60;

    return diff;

}