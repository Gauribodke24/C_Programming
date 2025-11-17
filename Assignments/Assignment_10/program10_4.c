///////////////////////////////////////////////////////////
//  Function :      FhtoCs
//  Description :   It is used to Display temperature in Celsius
//  Input :         Float
//  Output :        Double
//  Author :        Gauri Shekhar Bodke
//  Date :          12/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0/ 9.0);
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius is : %f", dRet);

    return 0;
}
