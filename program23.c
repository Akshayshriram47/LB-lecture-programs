#include<stdio.h>

// display the op using for get input from user



int Display(int iValue)
{
     
    int iCnt=0;
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
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