///////////////////////////////////////////////////////////
//  Function :      ChkZero
//  Description :   It is used to check zero in digits
//  Input :         Integer
//  Output :        Boolean
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
          return 1;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains ZERO");
    }
    else
    {
        printf("There is no ZERO");
    }

    return 0;

}

