/*
    problem statmt :

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
            iSize = i;
            Arr = new int[iSize];
        }

        ~Arrayx()
        {
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

};

int main()
{
    Arrayx obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}