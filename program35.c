// check whether number perfect or not
// Functional Approach

// INPUT  : 6
// OUTPUT : Number is perfect
// INPUT  : 61
// OUTPUT : Number is not perfect
// INPUT  : 28
// OUTPUT : Number is perfect
// INPUT  : 81
// OUTPUT : Number is not perfect

// Perfect numbers
// 6    28      496     8128 

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
bool CheckPerfect(int iData)
{
    int iAns=0;

    iAns=SumFactors(iData);

    if(iAns==iData)
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
    int iValue = 0;
    bool bRet=false;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if( bRet==true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}