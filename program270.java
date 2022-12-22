/* 

string
//      
        count small case letters

INPUT  : Akshay 
OUTPUT : A
         k
         s
         h
         a
         y
*/
import java.util.*;


class MarvellousX
{
    public void  Display(String s)
    {
        for (int i =0; i<s.length(); i++)
        {
            System.out.println(s.charAt(i));
        }
    }
}

class program270
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" enter string");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX();
        obj.Display(str);
    }
}