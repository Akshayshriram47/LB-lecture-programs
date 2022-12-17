// Topic name: problems on N Numbers

// Problem Statement: Accept N number from user 
// using iterations

// INPUT :         //1    7   8   2
// OUTPUT: 

// INPUT :         //4    5   2
// OUTPUT: 

// INPUT :      //7    4   1   2     1
// OUTPUT: 

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[5];
    int iCnt=0;

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
    
    return 0;
}