// Prints an n x n magic square.

#include <stdio.h>
#include <string.h>

int main(void) {
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");

    int n;
    scanf("%d", &n);

    int square[n][n];
    memset(square, 0, n * n * sizeof(int));

    int row = 0, col = n / 2;

    for (int i = 1; i <= n * n; ++i) {
        if (square[row][col] != 0) {
            row = (row + 2) % n;
            col = (col - 1 + n) % n;
        }
        square[row][col] = i;
        row = (row - 1 + n) % n;
        col = (col + 1) % n;
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col)
            printf("%5d", square[row][col]);
        printf("\n");
    }
}