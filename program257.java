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

    public boolean CheckArmstrong(int iNo)  // main
    {
        int iDigitCount = 0;
        int iTemp =iNo;
        int iDigit =0, iCnt =0 , iPower =1, iSum=0;

        while(iTemp != 0)  // to calculate no of digits
        {
            iDigitCount++;
            iTemp = iTemp / 10;
        }

        iTemp = iNo;

        while(iTemp !=0)
        {
            iDigit = iTemp % 10;

            for ( iCnt = 1; iCnt <=iDigitCount; iCnt++)  // logic to calculate power
            {
                iPower = iPower * iDigit;
            }

            iSum = iSum + iPower;
            iPower = 1;  

            iTemp = iTemp / 10;   
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}


class program257
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