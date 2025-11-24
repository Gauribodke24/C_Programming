///////////////////////////////////////////////////////////
//  Function :      print_numbers
//  Description :   It is used to display numbers till given limit
//  Input :         Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void print_numbers(int limit)
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
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter the Limit :");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}