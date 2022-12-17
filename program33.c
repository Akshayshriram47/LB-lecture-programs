// Problem Stmt: Accept number from user and display the factors

#include<stdio.h>
  
// O(N/2)   time complexity

void DisplayFactors(int iNo)
{
 

int iCnt=0;

for(iCnt=1;iCnt<=(iNo/2);iCnt++)
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