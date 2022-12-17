// problems on string...

// Problem statement:Accept input String and the frquency of letter
// INPUT  :  he is a ram
// OUTPUT : a: 2

// INPUT  : aaram
// OUTPUT : a:3

// INPUT  : whole
// OUTPUT : a:0


#include<stdio.h>

int CountCh(char *str)
{
    int iFreq=0;

    while (*str !='\0')
    {
        if(*str =='a')
        {
            iFreq++;
        }
        
        str++;
    }
    return iFreq;
    
}

int main()
{   
    
    char Arr[20];
    int iRet=0;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

     iRet = CountCh(Arr); // strlenX(100)  base address of that aaray

    printf("frquency  of a is : %d\n",iRet);

    return 0;
}