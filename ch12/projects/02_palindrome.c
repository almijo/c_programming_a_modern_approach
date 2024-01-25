// Checks whether a message is a palindrome.

#include <ctype.h>
#include <stdio.h>

#define MAX_MESSAGE_SIZE 100

int main(void) {
    char message[MAX_MESSAGE_SIZE], ch;
    char *p1 = &message[0], *p2 = &message[0];

    printf("Enter a message: ");

    while (ch = getchar(), ch != '\n' && p1 < &message[MAX_MESSAGE_SIZE])
        if (isalpha(ch))
            *p1++ = tolower(ch);

    while (p1 >= &message[0]) {
        if (*--p1 != *p2++) {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
}