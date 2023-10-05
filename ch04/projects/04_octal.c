// Displays a given decimal number in octal.

#include <stdio.h>

int main(void) {
    int number, d1, d2, d3, d4, d5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    d1 = number % 8;
    number /= 8;
    d2 = number % 8;
    number /= 8;
    d3 = number % 8;
    number /= 8;
    d4 = number % 8;
    number /= 8;
    d5 = number % 8;

    printf("%d%d%d%d%d\n", d5, d4, d3, d2, d1);
}