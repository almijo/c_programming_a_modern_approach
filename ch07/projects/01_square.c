// Determines the bit-sizes of several integer types.

#include <stdio.h>

int main(void) {
    // fails at 46341 * 46341 = 2147488281 which means that int is 32-bit
    for (int i = 1;; ++i) {
        int square = i * i;

        if (square < 0) {
            printf("The result of %d * %d can't be stored in an int.\n", i, i);
            break;
        }
    }

    // fails at 182 * 182 = 33124 which means that short is 16-bit
    for (short i = 1;; ++i) {
        short square = i * i;

        if (square < 0) {
            printf("The result of %hd * %hd can't be stored in a short.\n", i, i);
            break;
        }
    }

    // fails at 3037000500 * 3037000500 = 9.223372e+18 which means that long is 64-bit
    for (long i = 1;; ++i) {
        long square = i * i;

        if (square < 0) {
            printf("The result of %ld * %ld can't be stored in a long.\n", i, i);
            break;
        }
    }

    // sanity check
    printf("sizeof int: %zu, short: %zu, long: %zu\n", sizeof(int), sizeof(short), sizeof(long));
}