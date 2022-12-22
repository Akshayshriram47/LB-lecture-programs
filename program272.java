/* 

string
//      
        count capital case letters

INPUT  : Akshay 
OUTPUT : 1
*/
import java.util.*;


class MarvellousX
{
    public int capitalCount(String s)
    {
        int iCnt =0;

        for (int i =0; i<s.length(); i++)
        {
            if(s.charAt(i) >= 'A' && s.charAt(i)<='Z')
            {
                iCnt++;
            }
        }

        return iCnt;
    }
}

class program272
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" enter string");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX();
        int iRet = obj.capitalCount(str);
        System.out.println("Number of small case letters are :"+iRet);
    }
}