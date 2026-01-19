#include<stdio.h>

///////////////////////////////////////////////////////////////////
//  Function :      Pattern
//  Description :   It is used to display alphabetical pattern
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          18/12/2025
//
///////////////////////////////////////////////////////////////////

/* 

    Input  :  4
    Output :  A      B       C       D

*/

void Pattern(int iNo)
{
    int i = 64;
    int iCnt = 0;

    printf("Output : ");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", i+iCnt);
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