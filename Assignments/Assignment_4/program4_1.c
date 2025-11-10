///////////////////////////////////////////////////////////
//
//  Function Name : Multiply Factors
//  Description :   It is used to multiplication of that factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if( iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("%d", iRet);

    return 0;

}