// Accept N numbers on users and count N numbers of  numbers

// INPUT  :
// OUTPUT :

#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
             (int Arr[], int iSize)
   {
        //logic
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

           =       (ptr,iLength);

     // Step 6:Deallocate the memory 

     free(ptr);

     // Step 7:

     return 0;     

}
