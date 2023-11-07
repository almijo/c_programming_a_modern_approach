// Tests whether two words are anagrams.

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int char_counts[26] = {0};
    char ch;

    printf("Enter first word: ");

    while ((ch = tolower(getchar())) != '\n')
        if (isalpha(ch))
            ++char_counts[ch - 'a'];

    printf("Enter second word: ");

    while ((ch = tolower(getchar())) != '\n')
        if (isalpha(ch))
            --char_counts[ch - 'a'];

    for (int i = 0; i < 26; ++i)
        if (char_counts[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }

    printf("The words are anagrams.\n");
}