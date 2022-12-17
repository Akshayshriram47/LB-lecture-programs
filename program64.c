// Problem Statement: Accept number from user and return largest number on digit

// INPUT:271
// OUTPUT:7
#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit=0;
    int iMax=0;

    if(iNo<0)   // updator
    {
        iNo=-iNo;
    }

    while (iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit>iMax)
        {
            iMax=iDigit;
        }

        iNo=iNo/10;
    }
    return iMax;
    
}
int main()
{
    int iValue = 0;
    int iRet=0; 
    
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet=MaxDigit(iValue);

    printf("Largest digit is:%d",iRet);

    return 0;
}
