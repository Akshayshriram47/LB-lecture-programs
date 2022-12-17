

// INPUT  Row :4
// INPUT Col :4

/*  OUTPUT :
       $    *   *   *
       *    $   *   *
       *    *   $   *
       *    *   *   $
*/

#include<stdio.h>

void Display(int iRow,int  iCol)
{
    int i=0, j=0;

    for(i=1; i<=iRow;i++)
    {
        for(j=1; j<=iCol;j++)
        {
            if(i==j)
            {
                printf("$\t",i);
            }
            else
            {
                printf("*\t");
            }

           
        }
        printf("\n");
    }

    
}



int main()
{
    int iValue1=0,  iValue2=0;

    printf("Enter num of rows\n");
    scanf("%d",&iValue1);

    printf("Enter num of columns\n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);
    return 0;
}