///////////////////////////////////////////////////////////
//  Function :      KMtoMeter
//  Description :   It is used to Display Distance in Meters
//  Input :         Integer
//  Output :        Integer
//  Author :        Gauri Shekhar Bodke
//  Date :          12/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Distance in Kilometers :");
    scanf("%d", &iValue1);

    iRet = KMtoMeter(iValue1);
    printf("Distance in Meters is : %d", iRet);

    return 0;
}