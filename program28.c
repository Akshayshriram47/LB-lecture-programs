#include<stdio.h>

//addition of 1 to 5 numbers

int Summation()
{
  int iCnt=0;
  int iSum=0;

   

  for(iCnt=1;iCnt<=5;iCnt++)
  {
    iSum= iSum+ iCnt;
  }

   
    return iSum;


}
int main()
{
    int iRet=0;

    iRet=Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}