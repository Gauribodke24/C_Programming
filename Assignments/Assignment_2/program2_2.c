///////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description :   It is used to print the desired number of "*" on screen.
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :           05/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo --;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}