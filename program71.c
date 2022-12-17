// Dynamic memory allocation

// Topic name: problems on N Numbers

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

int Summation(int Arr[], int iSize)
{
    int iCnt=0, iSum=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0, iLength=0 ;

    printf("Enter number of elements u want to store\n");
    scanf("%d",&iLength);
   
    ptr = (int*) malloc(iLength*sizeof(int));   // Dynamic memory allocation

    printf("Enter the elements:\n");
//      1           2           3
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);  //4
    }

    printf("Elements from array are: \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet=Summation(ptr,iLength);

    printf("Addition of all elements are : %d\n",iRet);
    
    free(ptr);

    return 0;
}