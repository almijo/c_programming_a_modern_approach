// Reverse the words in a sentence.

#include <stdio.h>

int main(void) {
    char sentence[1000] = {0};
    char *i = sentence;

    printf("Enter a sentence: ");
    char last_char = getchar();

    while (last_char != '\n' && last_char != '.' && last_char != '?' && last_char != '!') {
        *i++ = last_char;
        last_char = getchar();
    }

    printf("Reversal of sentence:");

    // iterate backwards and pause at a space to print a word in an inner loop
    for (char *j = i; j >= sentence; --j) {
        if (*j == ' ' || j == sentence) {
            // without it the last word wouldn't be separated by a space
            if (j == sentence)
                putchar(' ');

            for (char *k = j; k < i; ++k)
                putchar(*k);

            if (j > sentence)
                i = j;
            else {
                printf("%c\n", last_char);
                return 0;
            }
        }
    }
}