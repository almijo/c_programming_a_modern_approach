// Calculates the greatest common divisor (gcd) of two integers with Euclid's algorithm.

#include <stdio.h>

int main(void) {
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d\n", m);
}