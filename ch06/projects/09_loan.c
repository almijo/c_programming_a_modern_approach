// Calculates the remaining balance on a loan after the first, second and third monthly payments.

#include <stdio.h>

int main(void) {
    float loan, interest_rate, monthly_payment, monthly_interest_rate;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &payments);

    monthly_interest_rate = interest_rate / 12.0f;

    for (int i = 1; i <= payments; ++i) {
        loan *= 1 + monthly_interest_rate / 100.0f;
        loan -= monthly_payment;
        printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }
}