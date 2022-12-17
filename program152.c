
// problem Statement: string convert in lower case into upper case

// INPUT  :  marvellous
// OUTPUT :MARVELLOUS

// INPUT  : akshay shriram
// OUTPUT : AKSHAY SHRIRAM


#include<stdio.h>

void struprX(char *str)
{   
     while (*str != '\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            *str = *str-32;
        }
        str++;
    }

}
int main()
{
    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    

    struprX(Arr);

    printf("String after conversion is: %s\n",Arr);


    return 0;
}