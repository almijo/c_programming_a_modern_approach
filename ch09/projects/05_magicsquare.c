// Prints an n x n magic square.

#include <stdio.h>
#include <string.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");

    int n;
    scanf("%d", &n);

    char square[n][n];
    create_magic_square(n, square);
    print_magic_square(n, square);
}

void create_magic_square(int n, char magic_square[n][n]) {
    memset(magic_square, 0, n * n * sizeof(char));

    int row = 0, col = n / 2;

    for (int i = 1; i <= n * n; ++i) {
        if (magic_square[row][col] != 0) {
            row = (row + 2) % n;
            col = (col - 1 + n) % n;
        }
        magic_square[row][col] = i;
        row = (row - 1 + n) % n;
        col = (col + 1) % n;
    }
}

void print_magic_square(int n, char magic_square[n][n]) {
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col)
            printf("%5d", magic_square[row][col]);
        printf("\n");
    }
}