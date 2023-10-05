// Asks the user for a 24-hour time, then displays the time in 12hour form.

#include <stdio.h>

int main(void) {
    printf("Enter a 24-hour time: ");

    int hour, minute;
    scanf("%d:%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");
    if (hour == 0)
        printf("12:%02d AM\n", minute);
    else if (hour < 12)
        printf("%02d:%02d AM\n", hour, minute);
    else if (hour == 12)
        printf("12:%02d PM\n", minute);
    else
        printf("%02d:%02d PM\n", hour - 12, minute);
}