

// 
// Row 4
// Coloums 5
/*
    *   *   *   *   *
    *   *   *   *   *
    *   *   *   *   *
    *   *   *   *   *

*/

#include<stdio.h>


void Display(int iRow, int iCol)   // N
{
    int i=0, j=0;

    for(i=1; i<=iRow;i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    


}
int main()
{
    int iValue1=0 , iValue2;

    printf("Enter a number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter a number of Coloumn \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}