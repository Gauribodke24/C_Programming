//////////////////////////////////////////////////////////
//  Function :      Pattern
//  Description :   It is used to print multiples of 2
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          18/12/2025
//
///////////////////////////////////////////////////////////

/*
    Enter the Number : 8
    Output           : 2      4       6       8       10      12      14      16
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int i = 0;

    printf("Output : ");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        i = iCnt*2;
        printf("%d\t", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}