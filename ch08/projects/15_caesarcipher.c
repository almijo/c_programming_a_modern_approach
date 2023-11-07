// Encrypts a message using a Caesar cipher.

#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 80

int main(void) {
    char message[MAX_LENGTH] = {0};
    int shift, length = 0;

    printf("Enter message to be encrypted: ");

    for (length = 0; length < MAX_LENGTH; ++length) {
        char ch = getchar();

        if (ch == '\n')
            break;
        else
            message[length] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (int i = 0; i < length; ++i) {
        char ch = message[i];

        if (islower(ch))
            message[i] = ((ch - 'a') + shift) % 26 + 'a';
        else if (isupper(ch))
            message[i] = ((ch - 'A') + shift) % 26 + 'A';
    }

    printf("Encrypted message: %s\n", message);
}
