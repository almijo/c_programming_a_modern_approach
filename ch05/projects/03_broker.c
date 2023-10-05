// Calculates the commission for two brokers.

#include <stdio.h>

float get_commission1(float value);
float get_commission2(int number_of_shares, float price_per_share);

int main(void) {
    float value, price_per_share;
    int number_of_shares;

    printf("Enter the number of shares: ");
    scanf("%d", &number_of_shares);

    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    printf("Commission: $%.2f\n", get_commission1(number_of_shares * price_per_share));
    printf("Commission of rival: $%.2f\n", get_commission2(number_of_shares, price_per_share));
}

float get_commission1(float value) {
    float commission;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    return commission;
}

float get_commission2(int number_of_shares, float price_per_share) {
    float commission;

    if (number_of_shares < 2000)
        commission = 33 + 0.03f * number_of_shares;
    else
        commission = 33 + 0.02f * number_of_shares;

    return commission;
}