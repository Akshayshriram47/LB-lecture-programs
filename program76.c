// Accept N numbers on users and  N numbers of DisplayEvenOddCount numbers

// INPUT  : 5
// INPUT  : 10  11  12  13  14
// OUTPUT : iEvenCnt= 3
//          (iSize-iEvenCnt)=2

#include<stdio.h>
#include<stdlib.h>
   void DisplayEvenOddCount(int Arr[], int iSize)
   {
        int iCnt=0;
        int iEvenCnt=0, iOddCnt=0;

        for(iCnt=0; iCnt<iSize;iCnt++)
        {
            if((Arr[iCnt]%2)==0)
            {
                iEvenCnt++;
            }
           
        }

        printf("Number of even elements are : %d\n",iEvenCnt);
        printf("Number of odd elements are : %d\n",iSize-iEvenCnt);
   }
int main()
{
    int *ptr=NULL;
    int i=0;
    int iLength=0;

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

    DisplayEvenOddCount(ptr,iLength);

     // Step 5:Deallocate the memory 

     free(ptr);

     // Step 6:

     return 0;     

}
