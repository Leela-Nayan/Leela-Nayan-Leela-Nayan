#include <stdio.h>
#include <math.h>

#define PI 3.14159

void cone(float r, float h);
void sphere(float r);
void cuboid(float l, float w, float h);

int main() {
    float radius, height, length, width;

    printf("Enter radius and height of cone: ");
    scanf("%f %f", &radius, &height);
    cone(radius, height);

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    sphere(radius);

    printf("Enter length, width, and height of cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    cuboid(length, width, height);

    return 0;
}

void cone(float r, float h) {
    float slant = sqrt(r * r + h * h);
    float area = PI * r * slant + PI * r * r;
    float volume = (PI * r * r * h) / 3;

    printf("\nCone:\n");
    printf("Surface Area: %.2f\n", area);
    printf("Slant Height: %.2f\n", slant);
    printf("Volume: %.2f\n", volume);
}

void sphere(float r) {
    float area = 4 * PI * r * r;
    float volume = (4.0 / 3.0) * PI * r * r * r;

    printf("\nSphere:\n");
    printf("Surface Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
}

void cuboid(float l, float w, float h) {
    float area = 2 * (l * w + l * h + w * h);
    float perimeter = 4 * (l + w + h);
    float volume = l * w * h;

    printf("\nCuboid:\n");
    printf("Surface Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Volume: %.2f\n", volume);
}
