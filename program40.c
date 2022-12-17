// Accept number fron user and display Reverse order N using for loop
// Input : 5
// Output: 5  4  3  2  1
// Input : 10
// Output: 10  9  8  7  6  5  4  3  2  1

#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;

}