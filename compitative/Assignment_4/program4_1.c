//Q: Accepting an intiger and telling if its +ve -ve or 0
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("The Number is positive");

    }
    else if(iValue<0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}