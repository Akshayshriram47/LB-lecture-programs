#include<stdio.h>

// display the op using  while get input from user


int Display(int iValue)
{
     
    int iCnt=0;
    iCnt=1;
    while (iCnt<=iValue)
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
    }
    
    
}
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iNo);
    
   iRet=Display(iNo);

    return 0;

}