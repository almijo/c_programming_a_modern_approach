// Calculates the remaining balance on a loan after the first, second and third monthly payments.

#include <stdio.h>

int main(void) {
    float loan, interest_rate, monthly_payment, monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = interest_rate / 12.0f;

    loan *= 1 + monthly_interest_rate / 100.0f;
    loan -= monthly_payment;
    printf("\nBalance remaining after first payment: $%.2f\n", loan);

    loan *= 1 + monthly_interest_rate / 100.0f;
    loan -= monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan *= 1 + monthly_interest_rate / 100.0f;
    loan -= monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);
}