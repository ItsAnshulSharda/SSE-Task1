#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Hey User, Let's calculate the sum of first n natural numbers.");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of 1st %d natural numbers is %d", n, sum);
    return 0;
}