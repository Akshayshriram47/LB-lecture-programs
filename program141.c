// problems on string...

// Problem statement:Accept input String and the frquency of capital letter

// INPUT  :  He is a Ram
// OUTPUT : 2  (frequency)

// INPUT  : aaram
// OUTPUT : 0  (frequency)

// INPUT  : HE IS A ram
// OUTPUT : 5  (frequency)


#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;

    while (*str !='\0')
    {
        if((*str >='A') && (*str<='Z'))
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
    int iRet=0;

    printf("Please enter String\n");
    scanf("%[^'\n']s",Arr);

     iRet = CountCapital(Arr); // strlenX(100)  base address of that aaray

    printf("frquency  of capital letters  : %d\n",iRet);

    return 0;
}