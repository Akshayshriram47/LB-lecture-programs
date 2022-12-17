#include<stdio.h>

// Simple multiplication of two numbers
int main()
{
    int iNo1 = 0;
    int iNo2 = 0; 
    int iMul = 0;
    
    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    // printf("First number is : %d\n",iNo1);
    // printf("First number is : %d\n",iNo2);

    iMul=iNo1*iNo2;
    
    printf("Multiplicaton is : %d",iMul);

    return 0;

}