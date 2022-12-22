/* 

string

INPUT  : Akshay 
OUTPUT : A
         k
         s
         h
         a
         y

*/
import java.util.*;

class program269
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println(" enter string");
        String str = sobj.nextLine();
        
        for (int i =0; i<str.length(); i++)
        {
            System.out.println(str.charAt(i));
        }
    }
}