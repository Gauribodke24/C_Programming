///////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used to convert the case of character
//  Input :         Character
//  Output :        void
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n", tolower(CValue));
    }
    else if(CValue >= 'a' && CValue <= 'z' )
    {
        printf("%c\n", toupper(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}