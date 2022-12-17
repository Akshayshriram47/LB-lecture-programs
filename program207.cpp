/*
    problem stmt: problems on Digits
        accept input from user and addition of even digits

        INPUT  : 1274
        OUTPUT : 4
*/

#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }

        DigitX(int i)
        {
            iNo = i;
        }

        int SumEvenDigit()
        {
            int iSum = 0;
            int iDigit = 0;
            int iTemp = iNo;

            while(iTemp  != 0)
            {
                iDigit = iTemp %10;

                if(iDigit % 2 ==0)
                {
                    iSum = iSum + iDigit;
                }
                iTemp =iTemp /10;
            }
            return iSum;
        }

};

int main()
{
    int iValue = 0;

    cout<<"Please enter number:"<<"\n";
    cin>>iValue;

    DigitX obj (iValue);
    int iRet =obj.SumEvenDigit();

    

    cout<<"summation of even digit is : "<<iRet<<"\n";

    cout<<obj.iNo;      // o/p is 0
    
    return 0;
}