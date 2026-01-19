#include<stdio.h>

//////////////////////////////////////////////////////////
//  Function :      Pattern
//  Description :   It is used to display pattern
//  Input :         Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          18/12/2025
//
///////////////////////////////////////////////////////////

/*
    Enter the Number :  4
    Output           : #       1       *      #        2       *      #        3       *      #      4       *
*/
void Pattern(int iNo)
{
    int iCnt = 0;

    printf("Output : ");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t %d\t *\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}