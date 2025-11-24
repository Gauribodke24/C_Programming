///////////////////////////////////////////////////////////
//  Function :      count_factors
//  Description :   It is used to display count of factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0, iCount = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if(number % iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int number = 0;

    printf("Enter the Number :\n");
    scanf("%d", &number);

    printf("Total number of Factors are : %d\n", count_factors(number));

    return 0;
}