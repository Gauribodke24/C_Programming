///////////////////////////////////////////////////////////
//  Function :      Count
//  Description :   It is used to display digits less than 6
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d\n", iRet);

    return 0;

}





