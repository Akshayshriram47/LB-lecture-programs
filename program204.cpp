/*
    ******  Template  *******
    problem statmt: problems on N numbers
    
    
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

        

};

class MarvellousLB : public Arrayx
{
    public:
        MarvellousLB(int i) : Arrayx(i) // base member initialization
                                        // explicitly call of constructor
        {

        }

        void FunctionName()   // function 
        {
            // logic
        }

};

int main()
{
    int iLength =0;
    
    cout<<"Enter the size of array you want ? "<<"\n";
    cin>>iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);
    obj->Accept();
    obj->Display();

    

    

    delete obj;


   

    return 0;
}