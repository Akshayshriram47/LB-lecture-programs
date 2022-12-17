// problems on N  numbers Template
//  

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

        void Function()  // function which contains business logic
        {
            // logic
        }
};
int main()
{
   int iLength = 0;

   cout<<"Enter the number of elements you want ?"<<"\n";
   cin>>iLength;

   Arrayx obj(iLength);

   obj.Accept();
   obj.Display();

   obj.Function();


   return 0;
}