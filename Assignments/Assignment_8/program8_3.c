///////////////////////////////////////////////////////////
//  Function :      Factorial
//  Description :   It is used to display Factorial of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact =1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is : %d", iRet);

    return 0;
}