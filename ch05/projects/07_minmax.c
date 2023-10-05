// Finds the largest and smallest of four integers.

#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, min, max, min2, max2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 < i2) {
        min = i1;
        max = i2;
    }
    else {
        min = i2;
        max = i1;
    }

    if (i3 < i4) {
        min2 = i3;
        max2 = i4;
    }
    else {
        min2 = i4;
        max2 = i3;
    }

    if (min > min2)
        min = min2;
    if (max < max2)
        max = max2;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
}