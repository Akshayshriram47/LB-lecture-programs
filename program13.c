// Homework

// Number is divisible by 6 or not

#include<stdio.h>

int DivisibleBy(int iValue)
{
    if(iValue % 6==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;

}
int main()
{

    int iNo1=0;
    int bRet=0;
    printf("Enter a num\n");
    scanf("%d",&iNo1);

    bRet=DivisibleBy(iNo1);
    if(iNo1 % 6==0)
    {
         printf("Number is divisible by 6");
    }
    else
    {
         printf("Number is not divisible by 6");
    }

        return 0;

}