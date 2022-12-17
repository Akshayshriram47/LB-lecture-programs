//  Accept N numbers from user and findout smallest number of N numbers.

// INPUT :  N :  5 
//          Elements:     302   142   789   958   1001  
// OUTPUT : 302


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{   
    int iCnt=0;
    int iMin=Arr[0];

    for(iCnt=0; iCnt<iSize;iCnt++)   // complexity N
    {
        if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }   
    }
    return iMin;
}

int main()
{
    int *ptr=NULL;
    int iLength=0, i=0, iRet=0;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(sizeof(int)*iLength);

    printf("Enter the elements\n");

    for(i=0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=Minimum(ptr,iLength);
    printf("Smallest number from array is : %d ",iRet);

    free(ptr);
    
    return 0;
}