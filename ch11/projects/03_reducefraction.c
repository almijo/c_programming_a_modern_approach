// Reduces a fraction to its lowest terms.

#include <stdio.h>

int gcd(int m, int n);
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
    int num, denom, reduced_num, reduced_denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    reduce(num, denom, &reduced_num, &reduced_denom);
    printf("In lowest terms: %d/%d\n", reduced_num, reduced_denom);
}

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int g = gcd(numerator, denominator);
    *reduced_numerator = numerator / g;
    *reduced_denominator = denominator / g;
}