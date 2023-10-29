// Prints the row sums and column sums for a 5x5 matrix.

#include <stdio.h>

#define N 5

int main(void) {
    int matrix[N][N];

    for (int row = 0; row < N; ++row) {
        printf("Enter row %d: ", row + 1);

        for (int col = 0; col < N; ++col) {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("\nRow totals:");

    for (int row = 0; row < N; ++row) {
        int sum = 0;

        for (int col = 0; col < N; ++col) {
            sum += matrix[row][col];
        }

        printf(" %d", sum);
    }

    printf("\nColumn totals:");

    for (int col = 0; col < N; ++col) {
        int sum = 0;

        for (int row = 0; row < N; ++row) {
            sum += matrix[row][col];
        }

        printf(" %d", sum);
    }

    printf("\n");
}