// Displays a name as 'last name', 'first name initial'.

#include <stdio.h>

int main(void) {
    char first_initial, ch;

    printf("Enter a first and last name: ");

    scanf(" %c", &first_initial);

    // Ignore the other characters in the first name
    while (getchar() != ' ')
        ;

    // reads the initial of the last name and discards any whitespace in front
    scanf(" %c", &ch);

    do {
        putchar(ch);
        ch = getchar();
    } while (ch != ' ' && ch != '\n');

    printf(", %c.\n", first_initial);
}