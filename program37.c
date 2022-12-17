// Problem Stmt: Accept number from user and display the non factors

#include<stdio.h>
 // Input : 6
 // Output :  
void DisplayNonFactors(int iNo)
{
    int iCnt=0;
    printf("Non factors are %d\t",iNo);


    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d",iCnt);
        }
    }
}


int main()
{   
    int iValue=0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
   
    return 0;
}