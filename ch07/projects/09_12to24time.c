// Asks the user for a 12-hour time, then displays the time in 24-hour form.

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hour, minute;
    char meridiem;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &meridiem);
    meridiem = toupper(meridiem);

    hour %= 12;
    if (meridiem == 'P')
        hour += 12;

    printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);
}