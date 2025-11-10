///////////////////////////////////////////////////////////
//
//  Function Name : Factor Difference
//  Description :   It is used to display the difference between Factors and non factors of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;
            printf("%d\n", iSum1);
            
        }
        
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum2 = iSum2 + iCnt;
            printf("%d\n", iSum2);
            
        }
        
    }
    iDiff = iSum2 - iSum1;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference is  :%d\n", iRet);
    
    return 0;

}