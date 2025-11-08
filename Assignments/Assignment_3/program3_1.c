///////////////////////////////////////////////////////////
//
//  Function Name : Print
//  Description :   It is used to accept one number from user print that number of even numbers
//  Input :          Integer
//  Output :         Void
//  Author :         Gauri Shekhar Bodke
//  Date :           05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void Print(int iNo)
{
    int iCnt = 0;
    int iNum = 2;

    if(iNo <= 0)
    {
        return;
    }

    while( iCnt < iNo)
    {
        printf("%d \t", iNum);
        iNum += 2;
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Print(iValue);

    return 0;
}