/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display the First Number in Second Number of times
//  Input :         integer
//  Output :        integer
//  Author :        Gauri Shekhar Bodke
//  Date:           05/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                                                                             
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    printf("Enter the Frequency :\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}