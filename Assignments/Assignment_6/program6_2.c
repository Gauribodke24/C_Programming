///////////////////////////////////////////////////////////
//  Function :      CheckGreater
//  Description :   It is used to check whether given number is greater than 100 or not
//  Input :         Integer
//  Output :        Boolean
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 100)
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

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Number is Greater than 100");
    }
    else
    {
        printf("Number is Smaller than 100");
    }
    

    return 0;
}