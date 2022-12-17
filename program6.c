// Addition of two numbers

#include<stdio.h>

int Addition(int iVal1,int iVal2)
{
    int iAns=0;
    iAns=iVal1+iVal2;
    return iAns;
}

int main()
{
    int iNo1=10;
    int iNo2=20;
    int iAdd=0;

    // printf("Enter first num\n");
    // scanf("%d",&iNo1);

    // printf("Enter Second num\n");
    // scanf("%d",&iNo2);

    iAdd=Addition(iNo1,iNo2);
    printf("Addition is : %d",iAdd);

    return 0;

}