///////////////////////////////////////////////////////////
//  Function :      print_even_numbers
//  Description :   It is used to display even numbers till given limit
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void print_even_numbers(int limit)
{
    int iCnt = 0;

    if(limit < 1)
    {
        printf("Invalid Input");
    }
    else
    {
        for(iCnt = 1; iCnt <= limit; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                 printf("%d\t", iCnt);
            }
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter the Limit :");
    scanf("%d", &limit);

    print_even_numbers(limit);

    return 0;
}