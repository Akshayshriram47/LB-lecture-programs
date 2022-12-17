#include<stdio.h>
// display the op using *do-while* get input from user
int Display(int iValue)
{
     
    int iCnt=0;
    iCnt=1;
   do
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
    } while (iCnt<=iValue);
    
    
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