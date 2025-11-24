///////////////////////////////////////////////////////////
//  Function :      RangeDisplayEven
//  Description :   It is used to display even numbers in given range
//  Input :         Integer, Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Input");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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
    int iValue1 = 0, iValue2 = 0;
    

    printf("Enter the Starting point :");
    scanf("%d", &iValue1);

    printf("Enter the Ending point :");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}