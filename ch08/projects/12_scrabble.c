// Computes the value of a word in Scrabble.

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int value = 0;
    int scrabble_values[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                               1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;

    printf("Enter a word: ");

    while ((ch = toupper(getchar())) != '\n')
        value += scrabble_values[ch - 'A'];

    printf("Scrabble value: %d\n", value);
}