/*  

    problems on  N numbers  (Array )

    prblm stmt :  Accept N numbers from users return the addition of that N numbers  
    
    INPUT  : N : 5
                10  20  30  40  50

    OUTPUT :  150

*/

import java.util.*;

class program264
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter the size of array");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the elments of array");
        for (int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
           Arr[iCnt]= sobj.nextInt();
        }

        int iSum = 0;
        for(int i =0; i <Arr.length; i++)
        {
            iSum = iSum+Arr[i];
        }

        System.out.println("Addition is "+iSum);
    }
}