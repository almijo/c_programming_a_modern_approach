// Prints a one-month calendar.

#include <stdio.h>

int main(void) {
    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i = 1; i <= days; ++i) {
        if (i == 1 && start > 1)
            printf("%*d ", start * 3 - 1, i);
        else
            printf("%2d ", i);

        if ((i + start) % 7 == 1 || i == days)
            printf("\n");
    }
}