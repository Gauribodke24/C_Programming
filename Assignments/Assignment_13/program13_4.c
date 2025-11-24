///////////////////////////////////////////////////////////
//  Function :      sum_natural_numbers
//  Description :   It is used to display sum of N natural numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0, iSum = 0;

    if(limit < 1)
    {
        printf("Invalid Input");
    }
    else
    {
        for(iCnt = 1; iCnt <= limit; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int limit = 0;

    printf("Enter the Limit :");
    scanf("%d", &limit);

    printf("Sum of Numbers is : %d\n", sum_natural_numbers(limit));

    return 0;
}