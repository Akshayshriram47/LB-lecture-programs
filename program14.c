
// HOMEWORK


// Steps to  follow while Programming
// 1 Understand the program
// 2 write the algorithm
// 3 decide the programming lang
// 4 write the code
// 5 Test the output

////////////////////////////////////////////////////////////////////////////////////
// Problem tatement : Numbers is Divisible by 5 and 8 or not
// Input: 
// Output:
// Input: 
// Output:
//////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////////////////////////////////////
/*
    START
    Accept the numbers from user
    Divide that numbers by 5 and 8
        if the remainder gets 0 then
            print numbers is divisible by 5 and 8
        Otherwise
            print numbers is not divisible by 5 and 8
    END
*/

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
// Function name:  Divisible or not
// Description: To Check numbers Divisible by 5 and 8
// Input : Integer
// Output: Integer
// Author Name: Akshay Dattu Shriram
// Date: 13/10/2022
/////////////////////////////////////////////////////////

int DivisibleBy(int iValue)
{
    if((iValue%5 == 0)&&(iValue%8 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{

    int iNo=0;
    bool bRet=false;

    printf("Enter a num\n");
    scanf("%d",&iNo);

    bRet=DivisibleBy(iNo);

    if(bRet==true)
    {
        printf("Number is  divisible by 5 and 8");
    }
    else
    {
        printf("number is not divisible by 5 and 8");
    }
        return 0;
}