// Accept N numbers on users and perform the summation of Even and odd   numbers 
//INPUT  : 5
// INPUT  : 1  2  3  4  5
// OUTPUT : iSumEven summation = 6
//          iSumOdd summation = 9 

#include<stdio.h>
#include<stdlib.h>

   void Addition  (int Arr[], int iSize)
   {
        int iCnt=0, iSumEven=0, iSumOdd=0;

        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            if((Arr[iCnt]%2)==0)
            {
                iSumEven=iSumEven+Arr[iCnt];
            }
            else
            {
              iSumOdd=iSumOdd+ Arr[iCnt]; 
            }
        }
        printf("Summation of even elements are : %d\n",iSumEven);
        printf("Summation of odd elements are : %d\n",iSumOdd);
   }
int main()
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

      Addition(ptr,iLength);

     // Step 5:Deallocate the memory 

     free(ptr);

     // Step 6:

     return 0;     

}
