// Problem Statement: Accept number from user and return smallest number on digit

// INPUT:271
// OUTPUT:7
#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit=0;
    int iMin=9;

    if(iNo<0)   // updator
    {
        iNo=-iNo;
    }

    while (iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        

        iNo=iNo/10;
    }
    return iMin;
    
}
int main()
{
    int iValue = 0;
    int iRet=0; 
    
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet=MinDigit(iValue);

    printf("smallest digit is:%d",iRet);

    return 0;
}
