/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check EvenOdd
//  Description :   It is used to check whether the number is Even or Odd
//  Input :         integer
//  Output :        integer
//  Author :        Gauri Shekhar Bodke
//  Date:           05/11/2025
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false; 
    
    printf("Enter Number :\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number\n", iValue);
    }
    else
    {
        printf("%d is Odd Number\n", iValue);
    }

    return 0;
    
}