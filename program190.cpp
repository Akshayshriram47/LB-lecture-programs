// problems on numbers
//  Template

#include<iostream>
using namespace std;

class Numbers
{
    public:
    int iNo;

    Numbers(int i)
    {
        iNo=i;
    }
    void Function()  // here you want to place the function with business logic
    {

        // logic
    }

};

int main()
{
    int iValue=0;

    cout<<"Enter a number"<<"\n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Function();

    return 0;
}