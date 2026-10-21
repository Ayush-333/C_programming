
#include <stdio.h>
#include <stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue);

    printf("Enter second number: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
