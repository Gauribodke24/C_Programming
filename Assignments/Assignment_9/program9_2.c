///////////////////////////////////////////////////////////
//  Function :      DollartoINR
//  Description :   It is used to display US dollar in Indian currency
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int DollartoINR(int iNo)
{
    int inr = 0;
    inr = iNo * 70;
    return inr;
}

int main()
{
    int iValue = 0, iRet  = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = DollartoINR(iValue);
    printf("Value in INR is : %d", iRet);

    return 0;
}