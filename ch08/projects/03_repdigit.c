// Checks numbers for repeated digits

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int digit_count[10] = {0};
    bool is_repeated = false;
    long n;

    for (;;) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0)
            return 0;

        while (n > 0) {
            int digit = n % 10;

            if (digit_count[digit] > 0) {
                is_repeated = true;
                break;
            }

            ++digit_count[digit];
            n /= 10;
        }

        is_repeated ? printf("Repeated digit\n") : printf("No repeated digit\n");
    }
}