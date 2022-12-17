// problems on Digits

// Problem Statement: Accept number from user and count numbers of digits...
// 
// INPUT : 751
// OUTPUT: 3

// INPUT : 7115
// OUTPUT: 4

// INPUT : 7
// OUTPUT: 1

// INPUT : 45
// OUTPUT: 2


#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit=0;
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}