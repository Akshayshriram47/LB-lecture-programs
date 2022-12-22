/* 
string
//      
        Accept string input from user and 
//
INPUT  : 
OUTPUT : 

*/
import java.util.*;

class program274
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println("Data is"+Arr);
        
        
    }
}