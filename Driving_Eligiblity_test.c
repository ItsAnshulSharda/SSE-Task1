#include <stdio.h>
int main()
{
    int Age;
    char Name[100];
    char ValidLicense;
    char IsTired;
    printf("Hello User, This platform is to check whether you are currently eligible to drive on road or not.");
    printf("\n Lets get started with your name. Enter your name ");
    scanf("%s", Name);
    printf("\n Hi %s, Enter your age ", Name);
    scanf("%d", &Age);
    if (Age < 18 || Age > 100)
    {
        printf("\n Sorry %s, you are not eligible to drive on road since your age is outside the eligible range.", Name);
    }
    else 
    {
        printf(" \n Great, Do you have a valid driving lisence? (Y/n)");
        scanf(" %c", &ValidLicense);
        if (ValidLicense == 'n')
        {
            printf("\n Sorry %s, you are not eligible to drive without a valid driving lisence", Name);
        }
        else if (ValidLicense == 'Y')
        {
            printf("\n Are you tired? (Y/n)");
            scanf(" %c", &IsTired);
            if (IsTired == 'Y')
            {
                printf("Sorry %s, you are not eligible to drive on road for the reason of safety.", Name);
            }
            else if (IsTired == 'n')
            {
                printf("Congratulations %s, you are eligible to drive on road.", Name);
            }
            else
       	    {
            	printf("The input enetered is not vaild. Please run the program again");
        	}
        }
        else
        {
            printf("The input enetered is not vaild. Please run the program again");
        }
        return 0;
    }
}

