// Reverses a three-digit number.

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    printf("The reversal is: %d%d%d\n", number % 10, (number / 10) % 10, number / 100);
}