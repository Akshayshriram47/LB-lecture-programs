
// problem Statement: Accept one string from user and copy this string data on capital letter string.
// INPUT  : akshay
// OUTPUT : copied string is: AKSHAY

// INPUT  : asdfgh
// OUTPUT : copied string is: ASDFGH


#include<stdio.h>
void strcpyCapital(char *src, char *dest)
{ 
    while(*src != '\0')
    {
       if((*src >='a')&& (*src <= 'z'))
       {
            *dest = *src-32;
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
    
    strcpyCapital(Arr,Brr);   // strcpyX(100,200);

    printf("copied string is : %s\n",Brr);
        printf("original string is : %s\n",Arr);


    return 0;
}