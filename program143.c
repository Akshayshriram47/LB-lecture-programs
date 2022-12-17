// problems on string...

// Problem statement:Accept input String and accept character count number of that character occurances.

// INPUT  :    
// OUTPUT : 

// INPUT  : 
//          
// OUTPUT :

// problem on scanf



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
    char cValue = '\0';
    int iRet=0;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf("%c",&cValue);

     iRet = CountFreq(Arr,cValue);

    printf("frquency  of  letters  : %d\n",iRet);

    return 0;
}