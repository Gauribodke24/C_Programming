///////////////////////////////////////////////////////////
//
//  Function Name : NonFactors
//  Description :   It is used to display Non-factors of given number
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n", iCnt);
        }
        
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    NonFact(iValue);
    
    return 0;

}