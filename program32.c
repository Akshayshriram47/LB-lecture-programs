// Problem Stmt: Accept number from user and display the factors

#include<stdio.h>

// O(N/2)  time complexcity

void DisplayFactors(int iNo)
{
 /*
 (8 %1)==0
 (8 %2)==0
 (8 %3)==0
 (8 %4)==0
 (8 %5)==0
 (8 %6)==0
 (8 %7)==0
 */ 

int iCnt=0;

for(iCnt=1;iCnt<iNo;iCnt++)
{
    if(iNo%iCnt==0)
    {
        printf("%d\n",iCnt);
    }
} 
}

int main()
{   
    int iValue=0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);
    printf("Factors are:\n");
    DisplayFactors(iValue);
   
    return 0;
}