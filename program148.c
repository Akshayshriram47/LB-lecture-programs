
// problem Statement: character convert in upper case

// INPUT  : a
// OUTPUT : A

// INPUT  : Z
// OUTPUT : Z

// INPUT  : $  
// OUTPUT : $


#include<stdio.h>
char ToupperX(char ch)
{
    if((ch >='a')&& (ch <= 'z'))
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
    

    cRet= ToupperX(cValue);

    printf("Character in the upper case is : %c\n",cRet);

    return 0;
}