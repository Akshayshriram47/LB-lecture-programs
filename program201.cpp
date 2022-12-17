/*
    problem statmt : accept n numbers from useer and display minimun numbers on it
    
    input : 
    
    output:
    
    dynamic memory allocation

*/

#include<iostream>
using namespace std;

class Arrayx
{
    public:
        int *Arr;
        int iSize;

        Arrayx(int i)
        {
            cout<<"allocating the memory for resources..."<<"\n";

            iSize = i;
            Arr = new int[iSize];
        }

        ~Arrayx()
        {          
            cout<<"Deallocating the memory of resources..."<<"\n";

            delete[]Arr;
        }

        void Accept()
        {
            
            cout<<"Enter the elements of array :"<<"\n";

            for(int iCnt=0; iCnt <iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }


        void Display()
        {
            
            cout<<" elements of array are :"<<"\n";

            for(int iCnt=0; iCnt <iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
  
        }

        int Minimum()
        {
            int iMin = Arr[0];

            for(int iCnt=0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt]<iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }

};

int main()
{
    int iLength =0;
    int iRet=0;
    cout<<"Enter the size of array you want ? "<<"\n";
    cin>>iLength;

    Arrayx *obj = new Arrayx(iLength);  // Dynamic

    obj->Accept();
    obj->Display();


    iRet = obj->Minimum();
    cout<<"\n Smallest elements is : "<<iRet<<"\n";

    delete obj;

    return 0;
}