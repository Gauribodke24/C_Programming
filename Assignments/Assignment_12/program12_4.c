///////////////////////////////////////////////////////////
//  Function :      sum_of_even_factors
//  Description :   It is used to display Addition of even factors of a given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int sum_of_even_factors(int number)
{
    int iCnt = 0, iSum = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if(number % iCnt == 0 && iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int number = 0;

    printf("Enter the Number :\n");
    scanf("%d", &number);

    printf("Sum of even Factors are : %d\n", sum_of_even_factors(number));

    return 0;
}