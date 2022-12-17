// problems on string...

// Problem statement:Accept input String and the frquency of small letter

// INPUT  :  he is a ram
// OUTPUT : 8  (frequency)

// INPUT  : aaram
// OUTPUT : 5  (frequency)

// INPUT  : HE IS A ram
// OUTPUT : 3  (frequency)


#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0;

    while (*str !='\0')
    {
        if((*str >='a') && (*str<='z'))
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

     iRet = CountSmall(Arr); // strlenX(100)  base address of that aaray

    printf("frquency  of small letters  : %d\n",iRet);

    return 0;
}