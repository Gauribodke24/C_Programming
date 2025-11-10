///////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to chech if the number is even or odd
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("Number is EVEN");
    }
    else
    {
        printf("Number is ODD");
    }
}

int main()
{
    int number;

    printf("Enter the Number : \n");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}