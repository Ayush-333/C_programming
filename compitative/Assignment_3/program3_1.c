//Q: accept no form user and print that many even numbers
// in no = 7  ot= 2 4 6 8 10 12 14

#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 1;

    while (iCnt <= iNo)
    {
        printf("%d\t", iCnt * 2);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}