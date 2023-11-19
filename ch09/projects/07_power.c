// Implements an exponentiation function.

#include <stdio.h>

int power(int x, int n);

int main(void) {
    int b, n;

    printf("Enter b^n: ");
    scanf("%d^%d", &b, &n);
    printf("= %d\n", power(b, n));
}

int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int p = power(x, n / 2);
        return p * p;
    }
    else
        return x * power(x, n - 1);
}