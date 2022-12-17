
// problems on string...

// Problem statement:Accept input from user  check wheteher character is capital letters or not

// INPUT  : a
// OUTPUT : is  not a capital case letter

// INPUT  : A
// OUTPUT :is  a capital case letter

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch>='A') && (ch<='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}




int main()
{   
    
    char cValue='\0';
    bool bRet=false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);
    
    bRet=IsCapitalX(cValue);

    if(bRet==true)
    {
        printf("%c is a Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a capital case letter\n",cValue);

    }
    return 0;
}