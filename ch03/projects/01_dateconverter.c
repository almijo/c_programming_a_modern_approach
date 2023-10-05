// Transforms a date in the form mm/dd/yyyy into yyyymmdd.

#include <stdio.h>

int main(void) {
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %04d%02d%02d\n", year, month, day);
}