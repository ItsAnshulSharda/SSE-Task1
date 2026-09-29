#include <stdio.h>
int main()
{
    float Number_1;
    float Number_2;
    float Result;
    char Operator;
    printf("\n Hello, Welcome to the Simple Calculator!! You can perform addition, subtraction, multiplication and divison ");
    printf("\n Enter the 1st number: ");
    scanf("%f", &Number_1);

    printf("\n Enter the 2nd number: ");
    scanf("%f", &Number_2);

    printf("\n Enter the operator you wish to use (+,-,*,/): ");
    scanf(" %c", &Operator);

    if (Operator == '+')
    {
    Result = Number_1 + Number_2;
    printf("\n The result is of %.4f %c %.4f = %.4f", Number_1, Operator, Number_2, Result);
    }

    else 
    {
        if (Operator == '-')
        { 
            Result = Number_1 - Number_2;
            printf("\n The result is of %.4f %c %.4f = %.4f", Number_1, Operator, Number_2, Result);
        }
        else
        {
            if (Operator == '*')
            {
            Result = Number_1 * Number_2;
            printf("\n The result is of %.4f %c %.4f = %.4f", Number_1, Operator, Number_2, Result);
            }

            else 
            {
                if (Operator == '/')
                {
                    Result = Number_1 / Number_2;
                    printf("\n The result is of %.4f %c %.4f = %.4f", Number_1, Operator, Number_2, Result);
                }
                else 
                {
                printf("\n Try Again, you have entered an invalid input...");
                }
            }
        }
    }
    return 0;
}
