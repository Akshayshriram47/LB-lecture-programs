// Problem Stmt: Accept number from user and display the non factors Addition

#include<stdio.h>
 // Input : 6
 // Output :  
void DisplaySumFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;    
    printf("Non factors are %d\t",iNo);


    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
           
            iSum=iSum+iCnt;

        }
        return iSum;
    }
}


int main()
{   
    int iValue=0;
    int iRet=0;


    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet=DisplaySumFactors(iValue);
    printf("Summation of non factors are %d\n",iRet);
   
    return 0;
}