// Program that calculates how many digits (assume no more than 4) a number contains.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter a number: ");

    int i;
    scanf("%d", &i);
    int abs_i = abs(i);

    int n;
    if (abs_i < 10)
        n = 1;
    else if (abs_i < 100)
        n = 2;
    else if (abs_i < 1000)
        n = 3;
    else
        n = 4;

    printf("The number %d has %d digit(s).\n", i, n);
}