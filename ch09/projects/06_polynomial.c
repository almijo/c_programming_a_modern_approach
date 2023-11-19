// Computes the value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.

#include <stdio.h>

int power(int base, int exp);
int polynomial(int x);

int main(void) {
    printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for x: ");

    int x;
    scanf("%d", &x);

    printf("f(%d) = %d\n", x, polynomial(x));
}

int power(int base, int exp) {
    int result = 1;

    for (int i = 0; i < exp; ++i)
        result *= base;

    return result;
}

int polynomial(int x) {
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
}