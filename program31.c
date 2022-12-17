#include<stdio.h>

//Problem Stmt: Factorial of number using for loop

int Factorial(int iNo)
{
  int iCnt=0;
  int iFact=1;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    iFact= iFact*iCnt;
   }
   return iFact;
}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("factorial of  %d is: %d\n",iValue,iRet);

    return 0;
}