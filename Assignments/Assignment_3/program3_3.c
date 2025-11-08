///////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactors
//  Description :   It is used to accept number from user and print even numbers
//  Input :          Integer
//  Output :         void
//  Author :         Gauri Shekhar Bodke
//  Date :           05/11/2025
//
///////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\n", iCnt);          
        }   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}