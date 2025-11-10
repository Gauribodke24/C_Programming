///////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   It is used to check the type of Number(even, odd, zero)
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void CheckNumberType(int num)
{
    if(num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        printf("Number is Zero");
    }
    else
    {
        if((num % 2) == 0)
        {
            printf("Number is Even");
        }
        else //((num % 2) != 0)
        {
            printf("Number is Odd");
        }
    }   
}

int main()
{
    int number = 0;

    printf("Enter the Number : \n");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}
