
//  HOMEWORK

#include<stdio.h>
#include<stdbool.h>

// check whether number perfect or not

// INPUT : 6
// OUTPUT : Number is perfect
// INPUT : 61
// OUTPUT : Number is not perfect
int Perfect(int iValue)
{
    int iCnt=1;
    int iSum=0;

    for(iCnt=1;iCnt<iValue;iCnt++)
    {
       if (iValue%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
    }
    if(iSum==iValue)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iNo;
    bool bRet=0;

    printf("Enter a number");
    scanf("%d",&iNo);

    bRet=Perfect(iNo);
    if(bRet==true)
    {
        printf("Number is perfect");
    }
    else
    {
        printf("Number is not perfect");
    }
}