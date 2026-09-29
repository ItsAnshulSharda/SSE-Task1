#include <stdio.h>
void square(float side)
{
    float area, perimeter;
    area = side * side;
    perimeter = 4 * side;
    printf("\nSquare:");
    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f\n", perimeter);
}

void triangle(float a, float b, float c, float height)
{
    float area, perimeter;
    area = 0.5 * b * height;
    perimeter = a + b + c;
    printf("\nTriangle:");
    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f\n", perimeter);
}

void circle(float radius)
{
    float area, perimeter;
    float pi = 3.14159;
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("\nCircle:");
    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f\n", perimeter);
}

int main()
{
    float side;
    float a, b, c, height;
    float radius;
    printf("Enter side of square: ");
    scanf("%f", &side);

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Enter height of triangle: ");
    scanf("%f", &height);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    square(side);
    triangle(a, b, c, height);
    circle(radius);
    return 0;
}
