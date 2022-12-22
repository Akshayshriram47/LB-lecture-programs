/*  

    problems on  N numbers  (Array )

    prblm stmt :  Accept N numbers from users check palindrome or not

    INPUT  : N : 3
                10  20  10

    OUTPUT :  Palindrome

*/

import java.util.*;

class ArrayX
{
    protected int Arr [];

    public ArrayX (int iSize)    // constructor
    {
        Arr = new int [iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length +" elements");

        for (int iCnt =0 ; iCnt <Arr.length; iCnt++)
        {
            System.out.println("Enter the element no :"+(iCnt +1));
            Arr[iCnt]  = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elemnts of array are :");

        for(int iCnt =0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");

        }
        System.out.println();
    }

    
}


class MarvellousX extends  ArrayX
{
    public MarvellousX(int iSize)
    {
        super (iSize);
    }

    public boolean ChkPalindrome()
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        boolean bFlag = true;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                bFlag = false;
                break;
            }

            iStart++;
            iEnd--;
        }
        return bFlag;
    }
    
}

class program266
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want ?");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);


        obj.Accept();
        obj.Display();

         boolean bRet = obj.ChkPalindrome();

         if(bRet == true)
         {
            System.out.println("Array is palindrome");
         }
         else
         {
            System.out.println("Array is not palindrome");
         }
        
        
    }
}