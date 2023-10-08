// Approximates e with the series 1 + 1/1! + 1/2! + ... + 1/n! until the term becomes very small.

#include <stdio.h>

int factorial(int n) {
    int f = 1;

    for (int i = 2; i <= n; ++i) {
        f *= i;
    }

    return f;
}

int main(void) {
    float e = 1.0f, last_term = 1.0f, epsilon;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 1; epsilon < last_term; ++i) {
        last_term = 1.0f / factorial(i);
        e += last_term;
    }

    printf("e is approximately %f.\n", e);
}