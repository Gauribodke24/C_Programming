///////////////////////////////////////////////////////////
//  Function :      OddDisplay
//  Description :   It is used print Odd numbers upto to given input
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}