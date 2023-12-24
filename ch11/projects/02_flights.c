// Displays the closest departure time of a flight for a given time.

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {
    int hour, minute, time, closest_departure, closest_arrival;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;
    find_closest_flight(time, &closest_departure, &closest_arrival);

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

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    int hour, minute, time;

    int flight1_departure = 8 * 60 + 0;
    int flight1_arrival = 10 * 60 + 16;

    int flight2_departure = 9 * 60 + 43;
    int flight2_arrival = 11 * 60 + 52;

    int flight3_departure = 11 * 60 + 19;
    int flight3_arrival = 13 * 60 + 31;

    int flight4_departure = 12 * 60 + 47;
    int flight4_arrival = 15 * 60 + 0;

    int flight5_departure = 14 * 60 + 0;
    int flight5_arrival = 16 * 60 + 8;

    int flight6_departure = 15 * 60 + 45;
    int flight6_arrival = 17 * 60 + 55;

    int flight7_departure = 19 * 60 + 0;
    int flight7_arrival = 21 * 60 + 20;

    int flight8_departure = 21 * 60 + 45;
    int flight8_arrival = 23 * 60 + 58;

    int delta1 = abs(desired_time - flight1_departure);
    int delta2 = abs(desired_time - flight2_departure);
    int delta3 = abs(desired_time - flight3_departure);
    int delta4 = abs(desired_time - flight4_departure);
    int delta5 = abs(desired_time - flight5_departure);
    int delta6 = abs(desired_time - flight6_departure);
    int delta7 = abs(desired_time - flight7_departure);
    int delta8 = abs(desired_time - flight8_departure);

    if (delta1 < delta2) {
        *departure_time = flight1_departure;
        *arrival_time = flight1_arrival;
    }
    else if (delta2 < delta3) {
        *departure_time = flight2_departure;
        *arrival_time = flight2_arrival;
    }
    else if (delta3 < delta4) {
        *departure_time = flight3_departure;
        *arrival_time = flight3_arrival;
    }
    else if (delta4 < delta5) {
        *departure_time = flight4_departure;
        *arrival_time = flight4_arrival;
    }
    else if (delta5 < delta6) {
        *departure_time = flight5_departure;
        *arrival_time = flight5_arrival;
    }
    else if (delta6 < delta7) {
        *departure_time = flight6_departure;
        *arrival_time = flight6_arrival;
    }
    else if (delta7 < delta8) {
        *departure_time = flight7_departure;
        *arrival_time = flight7_arrival;
    }
    else {
        *departure_time = flight8_departure;
        *arrival_time = flight8_arrival;
    }
}