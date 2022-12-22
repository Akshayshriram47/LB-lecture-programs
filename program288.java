/*
    Pattern printing

    prblm stmt : pattern printing

    iRow = 4
    iCol = 4

            *   *   *   *
            *   *   *   *
            *   *   *   *
            *   *   *   *


*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0, j=0;

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();

        }
    }

}

class program288
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter number of rows");
        int i = sobj.nextInt();

        System.out.println("Enter number of columns");
        int j = sobj.nextInt();

        pobj.Display(i,j);
        
    }
}