
// problem Statement: character convert in toogle case

// INPUT  : A
// OUTPUT : a

// INPUT  : d
// OUTPUT : D

// INPUT  : $  
// OUTPUT : $


#include<stdio.h>
char CharToggle(char ch)
{
    if((ch >='A')&& (ch <= 'Z'))
    {
        return ch+32;
    }
    else if((ch >='a')&& (ch <= 'z'))
    {
        return ch-32;
    }
    else
    {
        return ch;
    }

}

int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    

    cRet= CharToggle(cValue);

    printf(" toogle character is : %c\n",cRet);

    return 0;
}