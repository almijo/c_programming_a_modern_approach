// Sums a series of numbers (using double variables)

#include <stdio.h>

int main(void) {
    double n, sum = 0;

    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n", sum);
}