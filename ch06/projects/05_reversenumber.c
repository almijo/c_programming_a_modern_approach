// Reverses a number.

#include <stdio.h>

int main(void) {
    int number, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        reversed = 10 * reversed + number % 10;
        number /= 10;
    }

    printf("Reversed: %d\n", reversed);
}