///////////////////////////////////////////////////////////
//  Function :      RectArea
//  Description :   It is used to Display Area of Rectangle
//  Input :         Float, Float
//  Output :        Double
//  Author :        Gauri Shekhar Bodke
//  Date :          12/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0;
    return  fArea = fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Widht :");
    scanf("%f", &fValue1);

    printf("Enter Heigth :");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Circle is : %f", dRet);

    return 0;
}