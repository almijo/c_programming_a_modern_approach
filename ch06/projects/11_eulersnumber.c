// Approximates e with the series 1 + 1/1! + 1/2! + ... + 1/n!

#include <stdio.h>

int factorial(int n) {
    int f = 1;

    for (int i = 2; i <= n; ++i) {
        f *= i;
    }

    return f;
}

int main(void) {
    float e = 1.0f;
    int n;

    printf("Enter the number of iterations: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        e += 1.0f / factorial(i);
    }

    printf("e is approximately %f.\n", e);
}