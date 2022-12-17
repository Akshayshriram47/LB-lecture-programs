
// problem Statement: Accept one string from user and copy this string data on other string.
// INPUT  : AKSHAY
// OUTPUT : copied string is: AKSHAY

// INPUT  : asdfgh
// OUTPUT : copied string is: asdfgh


#include<stdio.h>
void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyX(Arr,Brr);   // strcpyX(100,200);

    printf("copied string is : %s\n",Brr);

    return 0;
}