// Asks the user to enter the amount of taxable income, then displays the tax due.

#include <stdio.h>

float tax(float income);

int main(void) {
    printf("Enter your taxable income: ");

    float income;
    scanf("%f", &income);

    printf("Tax to pay: $%.2f\n", tax(income));
}

float tax(float income) {
    if (income < 750.0f)
        return 0.01f * income;
    else if (income < 2250)
        return 7.5f + 0.02f * (income - 750.0f);
    else if (income < 3750)
        return 37.5f + 0.03f * (income - 2250.0f);
    else if (income < 5250)
        return 82.5f + 0.04f * (income - 3750.0f);
    else if (income < 7000)
        return 142.5f + 0.05f * (income - 5250.0f);
    else
        return 230.0f + 0.06f * (income - 7000.0f);
}