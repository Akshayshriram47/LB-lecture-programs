#include<stdio.h>

//addition numbers from user using for loop

int Summation(int iNo)
{
  int iCnt=0;
  int iSum=0;

   

  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iSum= iSum+ iCnt;
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