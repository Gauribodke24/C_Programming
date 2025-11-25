///////////////////////////////////////////////////////////
//  Function :      DispalyDigit
//  Description :   It is used to display digits
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void DispalyDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n", iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    DispalyDigit(iValue);

    return 0;

}

