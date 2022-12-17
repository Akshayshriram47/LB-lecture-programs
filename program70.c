// Topic name: problems on N Numbers
// static memory allocation
// Problem Statement: Accept N number from user perform addition
// using iterations

// INPUT :         //1    7   8   2
// OUTPUT: 

// INPUT :         //4    5   2
// OUTPUT: 

// INPUT :      //7    4   1   2     1
// OUTPUT: 

#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[], int iSize)
{
    int iCnt=0, iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}
int main()
{
    int Arr[5];
    int iCnt=0;
    int iRet=0;


    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements from array are: \n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    
    iRet=Summation(Arr,5);

    printf("Addition of all elements are : %d\n",iRet);
    
    return 0;
}