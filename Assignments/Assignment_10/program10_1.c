///////////////////////////////////////////////////////////
//  Function :      CircleArea
//  Description :   It is used to Display Area of Circle
//  Input :         Float
//  Output :        Double
//  Author :        Gauri Shekhar Bodke
//  Date :          12/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double dArea = 0;
    return (dArea = PI * fRadius * fRadius);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %f", dRet);

    return 0;
}