//////////////////////////////////////////////////////////
//  Function :      CheckEqual
//  Description :   It is used to calculate percentage of given marks
//  Input :         Float, Float
//  Output :        Float
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

float Percentage(float a, float b)
{
    float fPer = 0.0;

    if(a > 0 && b >= 0 )
    {
        fPer = ((b / a) * 100); 
    }
    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter total Marks : \n");
    scanf("%d", &iValue1);

    printf("Please Enter obtained Marks : \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is: %.2f%%\n",fRet);

    return 0;
}
