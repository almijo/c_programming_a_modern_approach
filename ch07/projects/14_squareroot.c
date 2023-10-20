// Computes the square root using Newton's method.

#include <math.h>
#include <stdio.h>

int main(void) {
    double x, y, avg = 1, diff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        y = avg;
        avg = (y + x / y) / 2.0;
        diff = fabs(avg - y);
    } while (diff >= 0.00001 * y);

    printf("Square root: %f\n", avg);
}