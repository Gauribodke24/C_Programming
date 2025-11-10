///////////////////////////////////////////////////////////
//
//  Function Name : Summation of Non-factors
//  Description :   It is used to display Summation of Non-factors of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int SumNonFact(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d", iRet);
    
    return 0;

}