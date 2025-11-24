///////////////////////////////////////////////////////////
//  Function :      RangeSumEven
//  Description :   It is used to display Addition of even numbers in given range
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
     
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting point :");
    scanf("%d", &iValue1);

    printf("Enter the Ending point :");
    scanf("%d", &iValue2);

    if(iValue1 > iValue2 || iValue1 < 0 || iValue2 < 0)
    {
        printf("Invalid Input");
    }
    else
    {
        iRet = RangeSumEven(iValue1, iValue2);
        printf("Addition is : %d", iRet);
    }

    return 0;
}