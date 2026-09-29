#include <stdio.h>
int main()

{
int Number_of_Rows;
printf("How many number of rows do you want to print? ");
scanf("%d",&Number_of_Rows);

for(int i=1;i<=Number_of_Rows;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
}
return 0;

}