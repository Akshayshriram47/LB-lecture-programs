// Steps to follow while programming
//1  understand the problem
//2  write the algorithm
//3  Decide the programming lang
//4  write the pgm
//5  test the program

/////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :Accept number from user and check whether it is divisible by 5 or not
// Input: 23
// Output: 23 is not divisible by 5
// Input: 55
// Output: 55 is divisible by 5
//////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////
// Algorithm
/////////////////////////////////////////////////////

/*
    START
        Accepr number from user as NO
        Divide that NO by 5 and check the value of remainder
        If the value is  0
            Then display as NO is divisible by 5
        otherwise
            display as NO is not divisible by 5

    END
*/
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////
// 
// Function name: DivisibleByFive
// Description:  To check whether input is divisible by 5 or not
// Input: Integer
// Output: Integer
// Author: Akshay Dattu Shriram (468)
// Date: 12/10/2022
//
/////////////////////////////////////////////////////
bool DivisibleByFive(int iValue)
{
    
    int iAns = 0;
    iAns = iValue % 5;
    if(iAns==0)
    {
        return true;
    }
    else
    {
        return false;

    }
}
//////////////////////////////////////////////////
// Entry point of the function
/////////////////////////////////////////////////


int main()
{
    int iNo1 = 0;
    bool bRet = false;

    printf("Enter a num in multiple times of 5 \n");
    scanf("%d",&iNo1);

    bRet = DivisibleByFive(iNo1);
    if (bRet==false)
    {
        printf("%d is not divisible by 5 \n",iNo1);
    }
    else
    {
          printf("%d is  divisible by 5 \n",iNo1);
    }
    return 0;

}
///////////////////////////////////////////////
// Result 
// Input: 25
// Output: 25 is divisible by 5
//
////////////////////////////////////////////