///////////////////////////////////////////////////////////
//
//  Function Name : Factors Reverse
//  Description :   It is used to display the factors in Reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iNo)
{
    if( iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    for(iCnt = (iNo  / 2); iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
          printf("%d\n", iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    FactRev(iValue);
    
    return 0;

}