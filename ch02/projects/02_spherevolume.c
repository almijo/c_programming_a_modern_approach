// Computes the volume of a sphere with a 10-meter radius

#include <stdio.h>

#define PI 3.14159f

int main(void) {
    float radius = 10.0f;
    float volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("The volume of a sphere with a 10-meter radius is %f.\n", volume);
}