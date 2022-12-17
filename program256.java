/*  
    problems on numbers

    
    Accept  number from user and check whether armstrong number or not
    
    INPUT  : 153     (1^3 + 5^3 + 3^3)

    OUTPUT :  153   
                ia Armstrong number
    

*/
import java.util.*;

class Digits
{
    private int CountDigits(int iNo)  // helper fun
    {
        int iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    private int Power(int Base, int index) // e.g Base =4 index =5          // helper fun
    {
        int iAns = 1;

        for(int iCnt =1; iCnt <= index; iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }

    public boolean CheckArmstrong(int iNo)  // main
    {
        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;
        int iRet = 0;

        int iCount = CountDigits(iNo);

        while(iNo != 0 )
        {
            iDigit = iNo % 10;

            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;

            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}


class program256
{
    public static void main (String args[])
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println(" Enter First  number");
        int iNo1 = sobj.nextInt();


        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNo1);
        if(bRet == true)
        {
            System.out.println(iNo1 + " is a Armstrong number");
        }
        else
        {
            System.out.println(iNo1 + " is not a Armstrong number");

        }

        


    }
}