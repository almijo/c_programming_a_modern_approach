// Reverses a three-digit number without using arithmetic to split the number into digits.

#include <stdio.h>

int main(void) {
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);
    printf("The reversal is: %d%d%d\n", d3, d2, d1);
}