// Computes the volume of a sphere

#include <stdio.h>

#define PI 3.14159f

int main(void) {
    float radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("The volume of a sphere with a %.2f radius is %.2f.\n", radius, volume);
}