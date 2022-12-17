// problems on Digits

// Problem Statement: Accept number from user and count even numbers of digits...
// 
// INPUT : 451
// OUTPUT:  2

// INPUT : 12// problems on Digits

// Problem Statement: Accept number from user and count even numbers of digits...
// 
// INPUT : 451
// OUTPUT:  2

// INPUT : 12
// OUTPUT: 1

// INPUT : 405
// OUTPUT: 2

// INPUT : 523
// OUTPUT: 1


#include<stdio.h>

int CountEvenDigit(int iNo)
{
   int iDigit=0;
   int iEvenCnt=0;
    if(iNo==0)
    {
        return 1;
    }

    
    if(iNo<0)         // Filter
    {
        iNo=-iNo;
    }
   
   while (iNo!=0)
   {
        iDigit=iNo%10;
        
        
        if(iDigit%2==0)
        {
            iEvenCnt++;
        }
        iNo=iNo/10;


   }
   return iEvenCnt ;
   
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("even  digits are : %d\n",iRet);

    return 0;
}
// OUTPUT: 1

// INPUT : 405
// OUTPUT: 2

// INPUT : 523
// OUTPUT: 1


#include<stdio.h>

int CountEvenDigit(int iNo)
{
   int iDigit=0;
   int iEvenCnt=0;
    if(iNo==0)
    {
        return 1;
    }


    if(iNo<0)         // Filter
    {
        iNo=-iNo;
    }
   
   while (iNo!=0)
   {
        iDigit=iNo%10;
        
        
        if(iDigit%2==0)
        {
            iEvenCnt++;
        }
        iNo=iNo/10;


   }
   return iEvenCnt ;
   
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("even  digits are : %d\n",iRet);

    return 0;
}