
// 4
// A    B   C   D   

#include<stdio.h>


void Display(int iNo)   // N
{
    int iCnt=0;
    char ch='A';

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++ , ch++)
    {
        printf("%c\t",ch);
        
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