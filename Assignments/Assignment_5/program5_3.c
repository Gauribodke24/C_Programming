///////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   It is used to check if the year is a leap year or not
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void CheckLeapYear(int year)
{

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
}

int main()
{
    int yr = 0;

    printf("Enter year :");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}