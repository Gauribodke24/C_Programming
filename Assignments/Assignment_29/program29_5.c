#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//  Function :      Pattern
//  Description :   It is used to display pattern in matrix form
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          20/12/2025
//
/////////////////////////////////////////////////////////////////////////////////

/*
    Enter number of row :
    4
    Enter number of column :
    4

    1       2       3       4
    2       3       4       5
    3       4       5       6
    4       5       6       7

*/

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", i+j);
        }
        printf("\n");
    }
}

int main()

{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row :\n");
    scanf("%d", &iValue1);

    printf("Enter number of column :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}