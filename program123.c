
// optimization of file named as program122.c
// reduce the time complexity

// INPUT  Row :4
// INPUT Col :4

/*  OUTPUT :
            *   
            *   *
            *   *   *
            *   *   *   *

*/

#include<stdio.h>

void Display(int iRow,int  iCol)
{
    int i=0, j=0;

    
    if(iRow != iCol)  // updator
    {
        printf("Row numbers and colums numbers are different\n");
        return ;
    }

    for(i=1; i<=iRow;i++)
    {
        for(j=1; j<=i;j++)
        {
            
                    printf("*\t");
                
        }
        printf("\n");
    }

    
}



int main()
{
    int iValue1=0,  iValue2=0;

    printf("Enter num of rows\n");
    scanf("%d",&iValue1);

    printf("Enter num of colums\n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);
    return 0;
}