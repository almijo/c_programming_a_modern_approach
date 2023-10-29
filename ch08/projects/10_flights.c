// Displays the closest departure time of a flight for a given time.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hour, minute, time, closest_departure, closest_arrival;
    int deltas[8];

    int departures[8] = {8 * 60 + 0,  9 * 60 + 43,  11 * 60 + 19, 12 * 60 + 47,
                         14 * 60 + 0, 15 * 60 + 45, 19 * 60 + 0,  21 * 60 + 45};

    int arrivals[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60 + 0,
                       16 * 60 + 8,  17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    time = hour * 60 + minute;

    for (int i = 0; i < 8; ++i)
        deltas[i] = abs(time - departures[i]);

    for (int i = 0; i < 8; ++i) {
        if (i == 7 || deltas[i] < deltas[i + 1]) {
            closest_departure = departures[i];
            closest_arrival = arrivals[i];
            break;
        }
    }

    printf("Closest departure time is ");

    hour = closest_departure / 60;
    minute = closest_departure % 60;

    if (hour == 0)
        printf("12:%02d AM, arriving at ", minute);
    else if (hour < 12)
        printf("%02d:%02d AM, arriving at ", hour, minute);
    else if (hour == 12)
        printf("12:%02d PM, arriving at ", minute);
    else
        printf("%02d:%02d PM, arriving at ", hour - 12, minute);

    hour = closest_arrival / 60;
    minute = closest_arrival % 60;

    if (hour == 0)
        printf("12:%02d AM.\n", minute);
    else if (hour < 12)
        printf("%02d:%02d AM.\n", hour, minute);
    else if (hour == 12)
        printf("12:%02d PM.\n", minute);
    else
        printf("%02d:%02d PM.\n", hour - 12, minute);
}