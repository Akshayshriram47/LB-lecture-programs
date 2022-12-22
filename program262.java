/*  

    problems on  N numbers  (Array )

    prblm stmt :  Accept N numbers from users return the addition of that N numbers  
    
    INPUT  : N : 5
                10  20  30  40  50

    OUTPUT :  150

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

    public int Addition()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum +Arr[iCnt];
        }

        return iSum;
    }
    
}

class program262
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want ?");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);


        obj.Accept();
        obj.Display();

        int iRet = obj.Addition();
        System.out.println("Addition of all elemnts are:" +iRet);
    }
}