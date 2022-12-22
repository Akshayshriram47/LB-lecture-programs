/* 

string
//      
        count small case letters

INPUT  : Akshay 
OUTPUT :  5
*/
import java.util.*;


class MarvellousX
{
    public int smallCount(String s)
    {
        int iCnt =0;

        for (int i =0; i<s.length(); i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i)<='z')
            {
                iCnt++;
            }
        }

        return iCnt;
    }
}

class program271
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" enter string");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX();
        int iRet = obj.smallCount(str);
        System.out.println("Number of small case letters are :"+iRet);
    }
}