
// Accept N numbers from users accept as well another number and count its ferquency. 


// INPUT  : 5
// INPUT  : 10  11  12  10  10
//      findout ferquency : 10
// OUTPUT : 3

// INPUT  : 5
// INPUT  : 10  11  12  10  10
//      findout ferquency : 20
// OUTPUT : 0

#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
   int CalFrequency(int Arr[], int iSize,int iNo)
   {
        int iCnt=0, iFreq=0;
        
        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            if((Arr[iCnt])==iNo)
            {
                iFreq++;
            }
        }
        return iFreq;
   }
int main()
{
    int *ptr=NULL;
    int i=0;
    int iLength=0, iRet=0,  iValue=0;

    // Step 1 : Accept size of array
    printf("Enter a number of elements\n ");
    scanf("%d",&iLength);

    // Step 2:Allocate memory for array
    ptr = (int *)malloc(iLength*sizeof(int));

    // Step 3: Accept the elements of array
    printf("Enter the elements\n");

    for(i=0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }


    printf("Enter the elemnts to findout the frequency\n");
    scanf("%d",&iValue);
    // Step 4: Call the function

    iRet = CalFrequency(ptr,iLength,iValue);
    printf("Frequency of %d is: %d\n",iValue,iRet);

    // Step 6:Deallocate the memory 

     free(ptr);

    // Step 7:

     return 0;     

}
