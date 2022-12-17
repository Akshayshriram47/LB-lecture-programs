// problems on N  numbers Template
//  Addition of even and odd numbers

#include<iostream>
using namespace std;
// problems on N numbers

class Arrayx
{
    public:
        int *Arr;
        int iSize;
    
        Arrayx(int i)
        {
            iSize = i;
            Arr = new int [iSize]; // memory allocation
        }

        void Accept()
        {
            cout<<"Plz enters the numbers:"<<"\n";

            int iCnt=0;

            for(iCnt =0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"elements the  array are:"<<"\n";

            int iCnt=0;

            for(iCnt =0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int SumEven()  
        {
           int iSum=0;
           int iCnt=0;

           for(iCnt=0; iCnt<iSize; iCnt++)
           {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
                return iSum;
           }

           
        }

        
};
int main()
{
   int iLength = 0;
   int iRet=0;

   cout<<"Enter the number of elements you want ?"<<"\n";
   cin>>iLength;

   Arrayx obj(iLength);

   obj.Accept();
   obj.Display();

   iRet=obj.SumEven();
   cout<<"Addition is even numbers"<<iRet<<"\n";

  

   return 0;
}