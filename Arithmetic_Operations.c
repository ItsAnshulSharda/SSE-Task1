#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 15;
    int d = 25;
    printf("\nThe value of a+b+c+d is: %d", a + b + c + d);
    printf("\nThe value of a*b*c*d is: %d", a * b * c * d);
    printf("\nThe value of a-b is: %d", a - b);
    printf("\nThe value of b/a is: %d", b/a);
    printf("\nThe value obtained as remainder of d/b is: %d", d % b);

    return 0;
}

// The use of %d in the printf function is a format specifier that
// - tells the function to expect an integer value to be printed at that position in the string.
