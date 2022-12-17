

// INPUT  Row :4
// INPUT Col :4

/*  OUTPUT :
            #   1   1   1
            2   #   2   2
            3   3   #   3  
            4   4   4   #
       
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
        for(j=1; j<=iCol;j++)
        {
            
                if(i==j)
                {
                    printf("#\t");
                    
                }
                
                else
                {
                    printf("%d\t",i);
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

    printf("Enter num of colums\n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);
    return 0;
}