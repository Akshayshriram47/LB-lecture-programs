/*  
    problems on numbers

    Accept two number from user and display the common factors of that numbers

    INPUT  : 12 
           : 16

    OUTPUT : 1  2   4
    

*/
import java.util.*;

class Numbers
{
    public void CommonFactorsDisplay(int iNo1,int iNo2)    // method
    {
        int iCnt = 0;

        System.out.println("Common factors are :");

        for(iCnt = 1; ((iCnt<=iNo1/2) && (iCnt <=iNo2/2)); iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }

    }  

}


class program254
{
    public static void main (String args[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println(" Enter First  number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter a second number");
        int iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommonFactorsDisplay(iNo1,iNo2);



    }
}