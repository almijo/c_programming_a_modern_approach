// User inputs the numbers 1 to 16 in any order. Program displays these numbers as a square
// and calculates the sums of each row, column and diagonal.

#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16;
    int r1, r2, r3, r4, c1, c2, c3, c4, d1, d2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10,
          &i11, &i12, &i13, &i14, &i15, &i16);

    r1 = i1 + i2 + i3 + i4;
    r2 = i5 + i6 + i7 + i8;
    r3 = i9 + i10 + i11 + i12;
    r4 = i13 + i14 + i15 + i16;

    c1 = i1 + i5 + i9 + i13;
    c2 = i2 + i6 + i10 + i14;
    c3 = i3 + i7 + i11 + i15;
    c4 = i4 + i8 + i12 + i16;

    d1 = i1 + i6 + i11 + i16;
    d2 = i13 + i10 + i7 + i4;

    printf("\n%2d %2d %2d %2d\n", i1, i2, i3, i4);
    printf("%2d %2d %2d %2d\n", i5, i6, i7, i8);
    printf("%2d %2d %2d %2d\n", i9, i10, i11, i12);
    printf("%2d %2d %2d %2d\n", i13, i14, i15, i16);

    printf("\nRow sums: %2d %2d %2d %2d\n", r1, r2, r3, r4);
    printf("Column sums: %2d %2d %2d %2d\n", c1, c2, c3, c4);
    printf("Diagonal sums: %2d %2d\n", d1, d2);
}