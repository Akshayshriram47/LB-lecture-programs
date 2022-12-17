// problems on Digits

// Problem Statement: Accept number from user and check its palindrome or not for using for loop
// 
// INPUT : 121
// OUTPUT:  is palindrome

// INPUT : 141
// OUTPUT: is palindrome

// INPUT : 405
// OUTPUT: not palindrome

// INPUT : 523
// OUTPUT: not palindrome


#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
   int iDigit=0;
   int iRev=0;
   int iTemp=iNo;
   
  
    for(iRev=0;iNo!=0;iNo=iNo/10)   
    {
        iDigit=iNo%10;

        iRev= (iRev*10)+iDigit;
   }

   if(iRev==iTemp)
   {
        return true;
   }
   else
   {
        return false;
   }
   
}


int main()
{
    int iValue = 0;
    bool bRet=false;
    
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);

    if(bRet==true)
    {
        printf("%d is palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not palindrome number\n",iValue);

    }

    return 0;
}