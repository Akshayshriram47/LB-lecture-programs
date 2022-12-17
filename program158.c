
// problem Statement: Accept one string from user and copy this string data on lower letter string.
// INPUT  :  AKSHAY
// OUTPUT : copied string is: akshay

// INPUT  : ASDFGH
// OUTPUT : copied string is: asdfgh


#include<stdio.h>
void strcpySmall(char *src, char *dest)
{ 
    while(*src != '\0')
    {
       if((*src >='A')&& (*src <= 'Z'))
       {
            *dest = *src+32;
       }
        else
        {
            *dest = *src;
        }
         src++;
        dest++;
    }
    *dest=*src;  
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpySmall(Arr,Brr);   // strcpyX(100,200);

    printf("copied string is : %s\n",Brr);
        printf("original string is : %s\n",Arr);


    return 0;
}