///////////////////////////////////////////////////////////
//  Function :      Display
//  Description :   It is used print number line of given number
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}