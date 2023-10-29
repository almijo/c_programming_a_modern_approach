// Prints how many times a digits appears in a number.

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int digit_count[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        int digit = n % 10;

        ++digit_count[digit];
        n /= 10;
    }

    printf("Digit:       ");

    for (int i = 0; i < 10; ++i)
        printf("%-4d", i);

    printf("\nOccurrences: ");

    for (int i = 0; i < 10; ++i)
        printf("%-4d", digit_count[i]);

    printf("\n");
}