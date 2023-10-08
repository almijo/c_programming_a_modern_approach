// Reduces a fraction to its lowest terms.

#include <stdio.h>

int gcd(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main(void) {
    int m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int g = gcd(m, n);
    printf("In lowest terms: %d/%d\n", m / g, n / g);
}