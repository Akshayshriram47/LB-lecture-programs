# include<stdio.h>

// Display the output using while loop

int Display(int iValue)
{
   
     int iCnt=1; 
    while (iCnt<=iValue)
   {
        printf("Gay ganesh...\n");
        iCnt++;
    }
   
    
}
    
    
int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter the number  \n");
    scanf("%d",&iNo);

    
   iRet=Display(iNo);  // Function call

    return 0;
}