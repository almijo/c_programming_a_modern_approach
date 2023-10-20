// Translates an alphabetic phone number into numeric form.

#include <stdio.h>

int main(void) {
    printf("Enter phone number: ");

    for (;;) {
        char ch = getchar();

        if (ch >= 'A' && ch <= 'Z')
            putchar(0x32 + (ch - 'A') / 3);
        else
            putchar(ch);

        if (ch == '\n')
            break;
    }
}