// Computes the result of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for a given x. Uses Horner's Rule.

#include <stdio.h>

int main(void) {
    float x, result;

    printf("Enter a value to be inserted in 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: ");
    scanf("%f", &x);

    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is %.2f.\n", result);
}