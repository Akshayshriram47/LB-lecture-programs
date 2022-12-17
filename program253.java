/*  
    problems on numbers

    Accept number from user and display even factors...

    INPUT  : 20
    OUTPUT : 2  4   10

    change in for loop   time complexity n/2
*/
import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)    // method
    {
        int iCnt = 0;

        for(iCnt = 2 ; iCnt <= (iNo/2); iCnt+= 2) // iCnt = iCnt +2
        {
            if((iNo % iCnt )== 0)
            {
                
                
                    System.out.println("Even factor is :"+iCnt);
                
            }
        }
    }

}


class program253
{
    public static void main (String args[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("plz enter a number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo);



    }
}