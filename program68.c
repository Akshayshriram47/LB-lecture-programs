// Topic name: problems on N Numbers

// Problem Statement: Accept N number from user

// INPUT :       //1    7   8   2
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

    printf("Enter  the elements: \n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements from array are: \n");

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);

    return 0;
}