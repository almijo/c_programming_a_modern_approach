// Prints the sizeof-values of several types

#include <stdio.h>

int main(void) {
    printf("sizeof(int) = %zu, sizeof(short) = %zu, sizeof(long) = %zu\n", sizeof(int),
           sizeof(short), sizeof(long));
    printf("sizeof(float) = %zu, sizeof(double) = %zu, sizeof(long double) = %zu\n", sizeof(float),
           sizeof(double), sizeof(long double));
}