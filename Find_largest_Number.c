#include <stdio.h>
int main()

{

    int first_num, second_num, third_num;
    printf("Enter first number: ");
    scanf("%d", &first_num);

    printf("Enter second number: ");
    scanf("%d", &second_num);

    printf("Enter third number: ");
    scanf("%d", &third_num);

    if (first_num > second_num && first_num > third_num)
    {
        printf("%d is the largest number.", first_num);
        printf("\n");
    }
    else if (second_num > first_num && second_num > third_num)
    {
        printf("%d is the largest number.", second_num);
        printf("\n");
    }
    else if (third_num > first_num && third_num > second_num)
    {
        printf("%d is the largest number.", third_num);
        printf("\n");
    }
    else
    {
        printf("There is no single largest number.");
        printf("\n");
    }
    return 0;
}