// Asks the user to enter the amount of taxable income, then displays the tax due.

#include <stdio.h>

int main(void) {
    printf("Enter your taxable income: ");

    float income;
    scanf("%f", &income);

    float tax;
    if (income < 750.0f)
        tax = 0.01f * income;
    else if (income < 2250)
        tax = 7.5f + 0.02f * (income - 750.0f);
    else if (income < 3750)
        tax = 37.5f + 0.03f * (income - 2250.0f);
    else if (income < 5250)
        tax = 82.5f + 0.04f * (income - 3750.0f);
    else if (income < 7000)
        tax = 142.5f + 0.05f * (income - 5250.0f);
    else
        tax = 230.0f + 0.06f * (income - 7000.0f);

    printf("Tax to pay: $%.2f\n", tax);
}