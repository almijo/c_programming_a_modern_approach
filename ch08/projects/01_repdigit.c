// Checks numbers for repeated digits

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int digit_count[10] = {0};
    bool is_repeated = false;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        int digit = n % 10;

        if (digit_count[digit] > 0 && !is_repeated)
            is_repeated = true;

        ++digit_count[digit];
        n /= 10;
    }

    if (is_repeated) {
        printf("Repeated digit(s): ");

        for (int i = 0; i < 10; ++i) {
            if (digit_count[i] > 1)
                printf("%d ", i);
        }

        printf("\n");
    }
    else
        printf("No repeated digit\n");
}