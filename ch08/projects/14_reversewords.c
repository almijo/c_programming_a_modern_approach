// Reverse the words in a sentence.

#include <stdio.h>

int main(void) {
    char sentence[1000] = {0};
    int i = 0;

    printf("Enter a sentence: ");
    char last_char = getchar();

    while (last_char != '\n' && last_char != '.' && last_char != '?' && last_char != '!') {
        sentence[i++] = last_char;
        last_char = getchar();
    }

    printf("Reversal of sentence:");

    // iterate backwards and pause at a space to print a word in an inner loop
    for (int j = i; j >= 0; --j) {
        if (sentence[j] == ' ' || j == 0) {
            // without it the last word wouldn't be separated by a space
            if (j == 0)
                putchar(' ');

            for (int k = j; k < i; ++k)
                putchar(sentence[k]);

            if (j > 0)
                i = j;
            else {
                printf("%c\n", last_char);
                return 0;
            }
        }
    }
}