// Computes the factorial of a positive integer.

// results on my 64-bit machine:
// largest correct result for short 7! = 5040
// largest correct result for int 12! = 479001600
// largest correct result for long and long long 20! = 2432902008176640000
// the floats start to become approximations at 13!
// float reaches inf at 35!
// double reaches inf at 171!
// long double reaches inf at 1755!

#include <stdio.h>

int main(void) {
    short fac_s = 1;
    int fac_i = 1, n;
    long fac_l = 1;
    long long fac_ll = 1;
    float fac_f = 1;
    double fac_d = 1;
    long double fac_ld = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (short i = 1; i <= n; ++i)
        fac_s *= i;

    for (int i = 1; i <= n; ++i)
        fac_i *= i;

    for (long i = 1; i <= n; ++i)
        fac_l *= i;

    for (long long i = 1; i <= n; ++i)
        fac_ll *= i;

    for (float i = 1; i <= n; ++i)
        fac_f *= i;

    for (double i = 1; i <= n; ++i)
        fac_d *= i;

    for (long double i = 1; i <= n; ++i)
        fac_ld *= i;

    printf("short: %hd, int: %d, long: %ld, long long: %lld\n", fac_s, fac_i, fac_l, fac_ll);
    printf("float: %.0f, double: %.0f, long double: %.0Lf\n", fac_f, fac_d, fac_ld);
}