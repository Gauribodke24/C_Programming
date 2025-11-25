///////////////////////////////////////////////////////////
//  Function :      MultDigits
//  Description :   It is used to display multiplication of all digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iMul = iMul;
        }
        else
        {
             iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("%d", iRet);

    return 0;

}

