///////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to the Largest Number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if(x > y)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
    
}

int main()
{
    int a = 0, b = 0, c = 0, result = 0;

    printf("Enter Three numbers :  \n");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest Number is : %d", result);

    return 0;
}