///////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to check the vowel
//  Input :         Character
//  Output :        bool
//  Author :        Gauri Shekhar Bodke
//  Date :          05/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
        CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It iS a VOWEL");
    }
    else
    {
        printf("It iS not a VOWEL");
    }

    return 0 ;
}