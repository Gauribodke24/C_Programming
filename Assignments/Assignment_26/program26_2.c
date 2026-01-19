#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//  Function :      Pattern
//  Description :   It is used to display pattern in reverse order
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          18/12/2025
//
///////////////////////////////////////////////////////////////////////

/*
    Enter the Number : 5
    Output           : 5       #      4        #      3        #      2        #      1        #
*/
void Pattern(int iNo)
{
    int iCnt = 0;

    printf("Output : ");

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t #\t", iCnt);
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