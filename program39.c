// Problem Stmt: Accept number from user and display table 10 times
// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50 

#include<stdio.h>
void DisplayTable (int iNo)
{
    // Input: 5
    // 5*1
    // 5*2
    // 5*3
    // 5*4
    // 5*5
    // 5*6
    // 5*7
    // 5*8
    // 5*9
    // 5*10

    // Instead 5 = iNo;
    int iCnt=0;
    printf("_______________________________\n");// Designing part
    printf("table of %d is:\n",iNo);
    printf("_______________________________\n");// Designing part
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf(" %d\n",iNo*iCnt);
    }
    
}

int main()
{   
    int iValue=0;


    printf("Enter a number: \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    
   
    return 0;
}