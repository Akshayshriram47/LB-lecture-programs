// problems on string...

// Problem statement:Accept input String and accept character count number of that character occurances.

// INPUT  :  aaram
// OUTPUT : a: 3

// INPUT  : Abhiman
// OUTPUT : a: 1 (case sensitive)



#include<stdio.h>

int CountFreq(char *str, char ch)
{
    int iCnt=0;

    while (*str !='\0')
    {
        if((*str == ch))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
    
}

int main()
{   
    
    char Arr[20];
    char ch = '\0';
    int iRet=0;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    

     iRet = CountFreq(Arr,'a');

    printf("frquency  of  letters  : %d\n",iRet);

    return 0;
}