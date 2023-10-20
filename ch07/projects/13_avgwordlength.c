// Calculates the average word length for a sentence

#include <stdio.h>

int main(void) {
    int word_count = 0, letter_count = 0, in_word = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ' && in_word) {
            in_word = 0;
        }
        else if (ch != ' ') {
            ++letter_count;

            if (!in_word) {
                in_word = 1;
                ++word_count;
            }
        }
    }

    printf("words: %d, letters: %d\n", word_count, letter_count);
    printf("Average word length: %.1f\n", (float)letter_count / word_count);
}