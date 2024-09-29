// Prints the value of several unidentified variables.
// The values of uninitialized local variables are indeterminate and
// might lead to undefined behavior.

#include <stdio.h>

int main(void) {
    short s;
    int i;
    char c;
    float f;

    // output: s=0, i=0, c=, f=0.000000 for me
    printf("s=%d, i=%d, c=%c, f=%f\n", s, i, c, f);
}