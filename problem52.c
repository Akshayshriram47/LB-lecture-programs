// problems on Digits

// Problem Statement: Accept number from user and summation numbers of digits...
// 
// INPUT : 751  (7+5+1)
// OUTPUT: 13

// INPUT : 12  (1+2)
// OUTPUT: 3

// INPUT : 7
// OUTPUT: 7

// INPUT : 45   (4+5)
// OUTPUT: 9


#include<stdio.h>

int SummationDigit(int iNo)
{
   int iCnt=0;
   int iSum=0;
   int iDigit=0;


   
   while (iNo!=0)
   {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
        iSum=iSum+iDigit;
   }
   return iSum;
   
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = SummationDigit(iValue);

    printf("summation of digits are : %d\n",iRet);

    return 0;
}