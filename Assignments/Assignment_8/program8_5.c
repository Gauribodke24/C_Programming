///////////////////////////////////////////////////////////
//  Function :      TableRev
//  Description :   It is used to display Table of given number in reverse order
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\n", iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    TableRev(iValue);
    
    return 0;
}