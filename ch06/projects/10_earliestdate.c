// Prompts the user for two dates and then indicates which date comes ealier on the calendar.

#include <stdio.h>

int main(void) {
    int day, earliest_day = 0, month, earliest_month = 0, year, earliest_year = 0;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (day == 0 && month == 0 && year == 0)
            break;

        if (earliest_day == 0 || year < earliest_year ||
            month < earliest_month && year == earliest_year ||
            day < earliest_day && month == earliest_month && year == earliest_year) {
            earliest_day = day;
            earliest_month = month;
            earliest_year = year;
        }
    }

    printf("%d/%d/%02d is the earliest date.\n", earliest_month, earliest_day, earliest_year);
}