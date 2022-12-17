// problems on string...

// Problem statement:Accept input String and the frquency of letter
// INPUT  :  he is a ram
// OUTPUT : a A : 2  (frequency)

// INPUT  : aaram
// OUTPUT : a A : 3  (frequency)

// INPUT  : whole
// OUTPUT : a A : 0  (frequency)


#include<stdio.h>

int CountCh(char *str)
{
    int iCnt=0;

    while (*str !='\0')
    {
        if((*str =='a') || (*str=='A'))
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

     iRet = CountCh(Arr); // strlenX(100)  base address of that aaray

    printf("frquency  of a is : %d\n",iRet);

    return 0;
}