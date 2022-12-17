# include<stdio.h>

// Display the output using  for loop

int Display(int iValue)
{
     int iCnt=0;
    for(iCnt=1; iCnt<=iValue; iCnt++)
    {
        printf("Gay ganesh...\n");
    }
}
int main()
{

    int iNo=0;
    int iRet=0;
   
   printf("Enter the number of iterations \n");
   scanf("%d",&iNo);

   iRet=Display(iNo);  // Function call

    return 0;
}