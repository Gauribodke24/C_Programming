///////////////////////////////////////////////////////////
//  Function :      Number
//  Description :   It is used to display whether the Number is small, medium or large
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small");
    }
    else if (iNo >= 50 && iNo < 100)
    {
        printf("Number is Medium");
    }
    else if(iNo >= 100)
    {
        printf("Number is Large");
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}