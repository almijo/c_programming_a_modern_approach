// Prints all even squares between 1 and n.

#include <stdio.h>

int main(void) {
    int n, square = 0, i = 2;

    printf("Enter a number n: ");
    scanf("%d", &n);

    for (;;) {
        square = i * i;

        if (square > n)
            break;

        printf("%d\n", square);
        i += 2;
    }
}