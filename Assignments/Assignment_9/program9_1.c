///////////////////////////////////////////////////////////
//  Function :      Display
//  Description :   It is used to display the pattern
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void Diplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");

    scanf("%d", &iValue);

    Diplay(iValue);

    return 0;
}