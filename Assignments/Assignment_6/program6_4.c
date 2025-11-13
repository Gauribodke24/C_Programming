//////////////////////////////////////////////////////////
//  Function :      Multiply
//  Description :   It is used to print multiplication of three numbers
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int Multiply(int a, int b, int c)
{
    return a * b * c; 
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please Enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication : %d",iRet);

    return 0;
}
