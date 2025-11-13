///////////////////////////////////////////////////////////
//  Function :      MultipleDisplay
//  Description :   It is used print first 5 multiple of N(given input)
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt= 1; iCnt <= 5; iCnt++)
    {
        iMul = iCnt * iNo;
        printf("%d\t", iMul);

    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
