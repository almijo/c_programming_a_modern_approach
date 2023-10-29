// Translates a message into a cool message.

#include <ctype.h>
#include <stdio.h>

#define MAX_MESSAGE_LENGTH 100

int main(void) {
    char message[MAX_MESSAGE_LENGTH] = {0};
    int length;

    printf("Enter message: ");

    for (length = 0; length < MAX_MESSAGE_LENGTH; ++length) {
        char ch = toupper(getchar());

        if (ch == '\n')
            break;

        message[length] = ch;
    }

    printf("In B1FF-speak: ");

    for (int i = 0; i < length; ++i) {
        switch (message[i]) {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(message[i]);
            break;
        }
    }

    printf("!!!!!!!!!!!!\n");
}