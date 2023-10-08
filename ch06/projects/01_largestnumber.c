// Prints the largest number in a series entered by the user.

#include <stdio.h>

int main(void) {
    float largest = 0.0f, input;

    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &input);

        if (input > largest)
            largest = input;
        else if (input <= 0.0f)
            break;
    }

    printf("The largest number entered was %.2f.\n", largest);
}