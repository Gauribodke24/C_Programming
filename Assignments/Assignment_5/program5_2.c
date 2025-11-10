///////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   It is used to find the max number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int FindMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

int main()
{
    int num1, num2, result;

    printf("Enter Two Numbers :");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);
    printf("Maximun is   :%d\n", result);

    return 0;
}