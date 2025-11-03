///////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description : It is used to print the desired number of "*" on screen.
//  Input : Integer
//  Output : Void
//  Author : Gauri Shekhar Bodke
//  Date : 02/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}


int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}