// Asks the user for a dollar amount and then calculates a 5% tax.

#include <stdio.h>

int main(void) {
    float dollars;

    printf("Enter an amount: $");
    scanf("%f", &dollars);

    printf("With tax added: $%.2f\n", dollars * 1.05);
}