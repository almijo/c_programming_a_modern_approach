// Displays a name as 'last name', 'first name initial'.

#include <stdio.h>

int main(void) {
    char first_initial, ch;
    char name[20] = {0};
    int i = 0;

    printf("Enter a first and last name: ");

    scanf(" %c", &first_initial);

    // Ignore the other characters in the first name
    while (getchar() != ' ')
        ;

    // reads the initial of the last name and discards any whitespace in front
    scanf(" %c", &ch);

    while (ch != ' ' && ch != '\n') {
        name[i++] = ch;
        ch = getchar();
    }

    printf("You entered the name: %s, %c.\n", name, first_initial);
}