#include<stdio.h>

//Problem Stmt: Addition of 1 to n numbers from user using while loop

int Summation(int iNo)
{
  int iCnt=0;
  int iSum=0;

   

 
  while (iCnt<=iNo)
  {
    iSum=iSum+iCnt;
    iCnt++;
  }
  

   
    return iSum;


}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("enter the number\n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}