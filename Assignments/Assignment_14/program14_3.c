///////////////////////////////////////////////////////////
//  Function :      CountTwo
//  Description :   It is used to count and display 2 in all digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("The Frequency of 2 is : %d\n", iRet);

    return 0;

}



