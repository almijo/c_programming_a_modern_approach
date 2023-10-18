// Prints a table of squares.

#include <stdio.h>

int main(void) {
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // consumes \n that was left behind scanf
    getchar();

    for (int i = 1; i <= n; ++i) {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press Enter to continue...");

            // in case the user types more than just return
            while (getchar() != '\n')
                ;
        }
    }
}