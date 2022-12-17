/*  
    problems on numbers

    Accept  number from user and display the  factors and multiplication of factors of that numbers

    INPUT  : 12

    OUTPUT : 144  
    

*/
import java.util.*;

class Numbers
{
    public int FactorsMultiplication(int iNo1)    // method
    {
        int iCnt = 0;
        int iMult = 1;


        for(iCnt = 1; (iCnt<=iNo1/2); iCnt++)
        {
            if((iNo1 % iCnt == 0))
            {
                iMult = iMult * iCnt;

               
            }
        }
        return iMult;

    }  

}


class program255
{
    public static void main (String args[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println(" Enter First  number");
        int iNo1 = sobj.nextInt();


        Numbers nobj = new Numbers();

       int iRet =  nobj.FactorsMultiplication(iNo1);

       System.out.println("multiplication of factor "+ iNo1  +" is :"+ iRet);



    }
}