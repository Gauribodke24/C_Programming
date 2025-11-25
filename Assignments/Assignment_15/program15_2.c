///////////////////////////////////////////////////////////
//  Function :      CountOdd
//  Description :   It is used to count and display odd digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 1)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("%d", iRet);

    return 0;

}

