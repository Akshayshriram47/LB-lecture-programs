// using for loop

// Problem statement:Accept input String and display on screen
// INPUT  : AkshayShriram
// OUTPUT : 13 (length)

// INPUT  : Akshay DattuShriram
// OUTPUT : 19 (length)

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt=0, i=0;

    for(i=0; str[i] !='\0'; i++)
    {
        iCnt++;
    }
    return iCnt;
    
}

int main()
{   
    char Arr[50];
    int iRet=0;

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);


   iRet = strlenX(Arr); // strlenX(100)  base address of that aaray

    printf("Number of character are : %d\n",iRet);



    return 0;
}