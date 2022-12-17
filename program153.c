
// problem Statement: string convert in toggle   case

// INPUT  :  marvellous
// OUTPUT :MARVELLOUS

// INPUT  : AKSHAY SHRIRAM
// OUTPUT : akshay shriram


#include<stdio.h>

void strtoggleX(char *str)
{   
     while (*str != '\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            *str = *str-32;
        }
        else if((*str >='A') && (*str <='Z'))
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
    

    strtoggleX(Arr);

    printf("String after conversion is: %s\n",Arr);


    return 0;
}