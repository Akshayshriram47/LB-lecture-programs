#include<stdio.h>

// Division of two numbers

int Division(int iValue1,int iValue2)
{
    int iAns=0;
    iAns=iValue1/iValue2;
    return iAns;

}

int main()
{

    int iNo1=0, iNo2=0;
    int iDiv=0;

    printf("Enter the first num");
    scanf("%d",&iNo1);

    printf("Enter the second num");
    scanf("%d",&iNo2);

    iDiv=Division(iNo1,iNo2);
    printf("Division is %d ",iDiv);

    return 0;


}