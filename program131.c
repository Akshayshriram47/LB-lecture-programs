
// problems on string...
// ASCII Value range...

// Problem statement:Accept input from user  check wheteher digit   or not

// INPUT  : A
// OUTPUT : is  not a   digit

// INPUT  : 2
// OUTPUT :is  a digit

#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch>=48) && (ch<=57))  // ASCII value range
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
    
    bRet=IsDigit(cValue);

    if(bRet==true)
    {
        printf("%c is a Digit\n",cValue);
    }
    else
    {
        printf("%c is not Digit\n",cValue);

    }
    return 0;
}