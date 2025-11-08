///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to accept number from user and print even factors of that number
//  Input :          Integer
//  Output :         Void
//  Author :         Gauri Shekhar Bodke
//  Date :           05/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}