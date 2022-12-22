/*  

    problems on  N numbers  (Array )

    prblm stmt :  Accept N numbers from users return the addition of that N numbers  
    
    INPUT  : N : 5
                10  20  30  40  50

    OUTPUT :  150

*/

import java.util.*;

class program263
{
    public static void main(String a[])
    {
        int Arr[] = {10,20,30,40,50};
        int iSum =0;

        for (int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        System.out.println("Addition is "+iSum);
    }
}