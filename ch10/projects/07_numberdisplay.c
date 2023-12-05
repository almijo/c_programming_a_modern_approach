// Displays numbers by using characters to simulate a seven-segment display.

#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};

char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
    char ch;
    int pos = 0;

    clear_digits_array();

    printf("Enter a number: ");

    while (ch = getchar(), ch != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', pos++);
            if (pos >= MAX_DIGITS)
                break;
        }
    }

    print_digits_array();
}

void clear_digits_array(void) {
    for (int row = 0; row < 4; ++row)
        for (int col = 0; col < MAX_DIGITS * 4; ++col)
            digits[row][col] = ' ';
}

void process_digit(int digit, int position) {
    if (segments[digit][0])
        digits[0][position * 4 + 1] = '_';
    if (segments[digit][1])
        digits[1][position * 4 + 2] = '|';
    if (segments[digit][2])
        digits[2][position * 4 + 2] = '|';
    if (segments[digit][3])
        digits[2][position * 4 + 1] = '_';
    if (segments[digit][4])
        digits[2][position * 4] = '|';
    if (segments[digit][5])
        digits[1][position * 4] = '|';
    if (segments[digit][6])
        digits[1][position * 4 + 1] = '_';
}

void print_digits_array(void) {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < MAX_DIGITS * 4; ++col)
            putchar(digits[row][col]);
        printf("\n");
    }
}