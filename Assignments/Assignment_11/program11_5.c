///////////////////////////////////////////////////////////
//  Function :      RangeDisplay
//  Description :   It is used to display numbers in reverse order of given range
//  Input :         Integer, Integer
//  Output :        Void
//  Author :        Gauri Shekhar Bodke
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
     
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
             printf("%d\t", iCnt);
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}