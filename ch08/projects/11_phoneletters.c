// Translates an alphabetic phone number into numeric form.

#include <ctype.h>
#include <stdio.h>

// 15 + 1 to include the '\0' character
#define MAX_LENGTH 16

int main(void) {
    char phonenumber[MAX_LENGTH] = {0};
    char ch;
    int i = 0;

    printf("Enter phone number: ");

    while ((ch = toupper(getchar())) != '\n') {
        if (ch >= 'A' && ch <= 'Z')
            ch = 0x32 + (ch - 'A') / 3;

        phonenumber[i++] = ch;
    }

    printf("In numeric form: %s\n", phonenumber);
}