///////////////////////////////////////////////////////////
//  Function :      SquareMeter
//  Description :   It is used to Display Area in Sqaure meter
//  Input :         Integer
//  Output :        Double
//  Author :        Gauri Shekhar Bodke
//  Date :          12/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

double SquareMeter(int iValue)
{
    double dFeet = 0.0;
    dFeet = iValue * 0.0929;
    return dFeet;
}

int main()
{
    int iValue = 0.0;
    double dRet = 0;

    printf("Enter area in square feet :");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("Area in Square Meter is : %f", dRet);

    return 0;
}
