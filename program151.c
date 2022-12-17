
// problem Statement: string convert in upper case into lower case

// INPUT  : MARVELLOUS
// OUTPUT : marvellous

// INPUT  : AKSHAY SHRIRAM
// OUTPUT : akshay shriram


#include<stdio.h>

void strlwrX(char *str)
{   
     while (*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            *str = *str+32;
        }
        str++;
    }

}
int main()
{
    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    

    strlwrX(Arr);

    printf("String after conversion is: %s\n",Arr);


    return 0;
}