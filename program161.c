
// problem Statement: Accept one string from user and reverse that string
// INPUT  :  AKSHAY
// OUTPUT :  YAHSKA

// INPUT  : asdfgh
// OUTPUT : hgfdsa


#include<stdio.h>

void strrevX(char *str)
{
    // char *start = str;
    // char *end   = str; 

    char *start = NULL;
    char *end   = NULL; 
    char Temp = '\0'; 

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;

        start++;
        end--;

    }
}
int main()
{
    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("reverse string is : %s\n",Arr);
    return 0;
}