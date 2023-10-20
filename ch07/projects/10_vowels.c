// Countes the number of vowels in a sentence.

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    int count = 0;

    printf("Enter a sentence: ");

    while ((ch = tolower(getchar())) != '\n') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            ++count;
    }

    printf("Your sentence contains %d vowels.\n", count);
}