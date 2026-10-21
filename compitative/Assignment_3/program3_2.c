//Q: take no form user print even factor  of it
//in:24 ot:2,4,6,8,12(excluded "1" given in assignment doc for Q2  considering even number) 
#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}