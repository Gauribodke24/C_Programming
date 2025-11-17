///////////////////////////////////////////////////////////
//  Function :      Display
//  Description :   It is used to Display the single digit number into word
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          11/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");
    }
    else if (iNo == 1)
    {
        printf("One");
    }
    else if (iNo == 2)
    {
        printf("Two");
    }
    else if (iNo == 3)
    {
        printf("Three");
    }
    else if (iNo == 4)
    {
        printf("Four");
    }
    else if (iNo == 5)
    {
        printf("Five");
    }
    else if (iNo == 6)
    {
        printf("Six");
    }
    else if (iNo == 7)
    {
        printf("Seven");
    }
    else if (iNo == 8)
    {
        printf("Eight");
    }
    else if (iNo == 9)
    {
        printf("Nine");
    }
    else if (iNo == 1)
    {
        printf("One");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}