// problems on string...

// Problem statement:Accept input String and accept character check whether that character present or not


//          (case sensitive)
// INPUT  :  aaram
//          cValue: a
// OUTPUT : a is present in the string

// INPUT  : hello
//          cValue: m
// OUTPUT : m is not present in the string

// in loop we are not write the return value.


#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    
    
    while (*str !='\0')
    {
        if((*str == ch))
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    } 
    else
    {
        return true;
    }
}

int main()
{   
    
    char Arr[20];
    char cValue = '\0';
    bool bRet=false;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);   // space between "_%c"

     bRet = Check(Arr,cValue);

     if(bRet==true)
    {
        printf("Chracter is present in the string\n");
    }
    else
    {
        printf("Chracter is not present in the string\n");
    }


    return 0;
}