///////////////////////////////////////////////////////////
//
//  Description :   It is used to print the name
//  Input :         Character
//  Output :        Character
//  Author :        Gauri Shekhar Bodke
//  Date :          10/11/2025
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please Enter your full name : \n");
    fgets(Name, sizeof(Name), stdin);

    printf("Your Name is : %s \n ",Name);

    return 0;
}
