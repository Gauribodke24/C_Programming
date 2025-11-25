///////////////////////////////////////////////////////////
//  Function :      CountFour
//  Description :   It is used to count and display 4 in all digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 4)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("The Frequency of 4 is : %d\n", iRet);

    return 0;

}





