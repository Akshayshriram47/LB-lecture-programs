// problems on Digits

// Problem Statement: Accept number from user and return its reverse numbers
// 
// INPUT : 451
// OUTPUT:  154

// INPUT : 12
// OUTPUT: 21

// INPUT : 405
// OUTPUT: 504

// INPUT : 523
// OUTPUT: 325


#include<stdio.h>

int ReverseNumber(int iNo)
{
   int iDigit=0;
   int iRev=0;
   
   if(iNo<0)
   {
        iNo=-iNo;
   }

   while (iNo!=0)
   {
        iDigit=iNo%10;

        iRev= (iRev*10)+iDigit;
        iNo=iNo/10;
   }
   return iRev;
   
  
    
}


int main()
{
    int iValue = 0;
    int iRet=0;
    
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

     iRet=ReverseNumber(iValue);
    printf("Revesse number is : %d\n",iRet);

    return 0;
}