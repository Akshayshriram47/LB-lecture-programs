/*
    Pattern printing   

    prblm stmt : pattern printing

    INPUT  : 4529 
    OUTPUT : 
            9   2   5   4
            

        
*/
import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        
        int iDigit=0;
        int iTemp=0;

        while(iNo != 0)
        {
            iDigit = iNo %10;
            System.out.print(iDigit +"\t");
            iNo =iNo /10;
        }
        System.out.println();
    }

}

class program299
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter a number");
        int i = sobj.nextInt();

        pobj.Display(i);
        
    }
}