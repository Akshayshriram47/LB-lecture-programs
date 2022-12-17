// Accept N numbers on users and count N numbers of even  numbers

// INPUT  : 5
// INPUT  : 1 2 3 4 5 
// OUTPUT : 2

#include<stdio.h>
#include<stdlib.h>


// Step 5: write the logic and whatever
int CountEven (int Arr[], int iSize)  // server (in company)
{
    int iCnt=0, iEvenCnt=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2 )== 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()  // client (in company)
{
    int *ptr=NULL;
    int i=0;
    int iLength=0, iRet=0;

    // Step 1 : Accept size of array
    printf("Enter a number of elements\n ");
    scanf("%d",&iLength);

    // Step 2:Allocate memory for array
    ptr = (int *)malloc(iLength*sizeof(int));

    // Step 3: Accept the elements of array

    printf("Enter thr elements\n");

    for(i=0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4: Call the function

        iRet = CountEven(ptr,iLength);
        printf("Number of even elements are:%d",iRet);

     // Step 6:Deallocate the memory 

     free(ptr);

     // Step 7:

     return 0;     

}
