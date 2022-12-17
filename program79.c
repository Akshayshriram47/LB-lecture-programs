// Accept N numbers on users and check another number and check whether numbers in array or not.

// INPUT  :
// OUTPUT :

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5: Perform the operation on array
bool Occurance (int Arr[], int iSize,int iNo)
   {
        int iCnt=0;
        int iFreq=0;

        for ( iCnt = 0; iCnt <iSize; iCnt++)
        {
            if((Arr[iCnt])==iNo)
            {
                iFreq ++;
            }
        }
        
        if(iFreq==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
   }
int main()
{
    int *ptr=NULL;
    int i=0;
    int iLength=0, iValue=0;
    bool bRet=false;

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
    printf("Enter the elemnts to findout the Occurance\n");
    scanf("%d",&iValue);

    // Step 4: Call the function

           bRet=  Occurance(ptr,iLength,iValue);

           if(bRet==false)
           {
            printf("%d is occured in the array\n",iValue);
           }
           else
           {
            printf("There is no %d in the array\n",iValue);
           }

          

     // Step 6:Deallocate the memory 

     free(ptr);

     // Step 7:

     return 0;     

}
