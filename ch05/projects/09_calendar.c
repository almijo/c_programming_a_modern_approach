// Prompts the user for two dates and then indicates which date comes ealier on the calendar.

#include <stdio.h>

int main(void) {
    int day1, day2, month1, month2, year1, year2;
    int earlier = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2)
        earlier = -1;
    else if (year2 < year1)
        earlier = 1;
    else {
        if (month1 < month2)
            earlier = -1;
        else if (month2 < month1)
            earlier = 1;
        else {
            if (day1 < day2)
                earlier = -1;
            else if (day2 < day1)
                earlier = 1;
        }
    }

    if (earlier == -1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month1, day1, year1, month2, day2, year2);
    else if (earlier == 1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", month2, day2, year2, month1, day1, year1);
    else
        printf("You entered identical dates.\n");
}