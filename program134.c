// problems on string...

// Problem statement:Accept input String and display on screen
// INPUT  : AkshayShriram
// OUTPUT : 13 (length)

// INPUT  : Akshay DattuShriram
// OUTPUT : 19 (length)


#include<stdio.h>

int strlenX(char *str)
{
    int iCnt=0;

    while (*str !='\0')
    {
        iCnt++;
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

    iRet = strlenX(Arr); // strlenX(100)  base address of that aaray

    printf("Number of character are : %d\n",iRet);

    return 0;
}