/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print Hello if input is less than 10 otherwise print Demo
//  Input :         integer
//  Output :        integer
//  Author :        Gauri Shekhar Bodke
//  Date:           05/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}