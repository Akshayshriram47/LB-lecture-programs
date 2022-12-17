// problems on Digits

// Problem Statement: Accept number from user and count even and odd numbers of digits...
// 
// INPUT : 451
// OUTPUT:  Even 1
//          odd 2

// INPUT : 12
// OUTPUT: Even 1
//         odd  1

// INPUT : 405
// OUTPUT: Even 2
//          odd 1

// INPUT : 523
// OUTPUT: Even 1
//          odd 2


#include<stdio.h>

void CountEvenOddDigit(int iNo)
{
   int iDigit=0;
   int iEvenCnt=0;
   int iOddCnt=0;

    if(iNo==0)
    {
        iEvenCnt++;
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
        else
        {
            iOddCnt++;
           
        }
        iNo=iNo/10;


   }
   printf("Number of even digits are: %d\n",iEvenCnt);
   printf("Number of odd digits are: %d\n",iOddCnt);
    
}


int main()
{
    int iValue = 0;
    
    
    printf("Enter a number\n");
    scanf("%d",&iValue);

     CountEvenOddDigit(iValue);


    return 0;
}