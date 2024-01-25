// Reads a message, then prints the reversal of the message.

#include <stdio.h>

#define MAX_MESSAGE_SIZE 100

int main(void) {
    char ch, message[MAX_MESSAGE_SIZE];
    char *p = &message[0];

    printf("Enter a message: ");

    while (ch = getchar(), ch != '\n' && p < &message[MAX_MESSAGE_SIZE])
        *p++ = ch;

    while (p >= &message[0])
        putchar(*--p);

    putchar('\n');
}