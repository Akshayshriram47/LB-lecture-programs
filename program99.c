

// 
// Row 4
// Coloums 4
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *

*/
#include<stdio.h>


void Display(int iNo)   // N
{
    int iCnt=0, i=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        for(i=1; i<=iNo;i++)
        {
            printf("*\t");
        }
        printf("\n");
        
    }

}
int main()
{
    int iValue=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}