///////////////////////////////////////////////////////////
//  Function :      is_divisible_by_five
//  Description :   It is used to display whether given number is Divisible by 5 or not 
//  Input :         Integer
//  Output :        Boolean
//  Author :        Gauri Shekhar Bodke
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

int main()
{
    int number = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d", &number);

    bRet = is_divisible_by_five(number);
    if(bRet == true)
    {
        printf("Number is Divisible by 5\n");
    }
    else
    {
        printf("Number is not Divisible by 5\n");
    }

    return 0;
}