/* 
string
//      
        Accept string input from user and 
//
INPUT  : Akshay
OUTPUT : A
         k
         s
         h
         a
         y
*/
import java.util.*;

class program275
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i=0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }        
        
    }
}