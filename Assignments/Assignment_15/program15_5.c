///////////////////////////////////////////////////////////
//  Function :      CountDiff
//  Description :   It is used to display difference between summation of even and odd digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum1 = 0, iSum2 = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        if(iDigit % 2 == 1)
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d", iRet);

    return 0;

}

