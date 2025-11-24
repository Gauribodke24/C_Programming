///////////////////////////////////////////////////////////
//  Function :      print_factors
//  Description :   It is used to display factors of given Number
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if(number % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter the Number :\n");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}