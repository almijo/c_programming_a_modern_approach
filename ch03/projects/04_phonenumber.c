// Prompts the user to enter a phone number in a specific format and outputs it in a different form

#include <stdio.h>

int main(void) {
    int group1, group2, group3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &group1, &group2, &group3);
    printf("You entered %d.%d.%d\n", group1, group2, group3);
}