// Breaks a dollar amount into the smallest number of $20, $10, $5 and $1 bills.

#include <stdio.h>

int main(void) {
    int dollars;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    printf("$20 bills: %d\n", dollars / 20);
    dollars %= 20;
    printf("$10 bills: %d\n", dollars / 10);
    dollars %= 10;
    printf(" $5 bills: %d\n", dollars / 5);
    dollars %= 5;
    printf(" $1 bills: %d\n", dollars);
}