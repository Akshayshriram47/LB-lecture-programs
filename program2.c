#include<stdio.h>
// Multiplivation of two numbers
//
int Multiplication(int iValue1,int iValue2)
{
    int iAns=0;
    iAns=iValue1*iValue2;
    return iAns;

}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0; 
    int iMul = 0;
    
    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    printf("First number is : %d\n",iNo1);
    printf("First number is : %d\n",iNo2);

    iMul=Multiplication(iNo1,iNo2);
    printf("Multiplication is:\n %d",iMul);
    
    return 0;
}
