/* **************  Data structure  ********************

               singly linear linked list in c++ 
                         -> -> -> -> 

*/

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE First;  // characteristics
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
       

};
/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()   // constructor
{
    First = NULL;
    iCount = 0;

}

void SinglyLL :: InsertFirst(int no) // define the fun outside the class
{

}

void SinglyLL :: InsertLast(int no) // define the fun outside the class
{

}

void SinglyLL :: InsertAtPosition(int no, int ipos) // define the fun outside the class
{

}

void SinglyLL :: DeleteFirst( ) // define the fun outside the class
{

}

void SinglyLL :: DeleteLast( ) // define the fun outside the class
{

}

void SinglyLL :: DeleteAtPosition(int ipos ) // define the fun outside the class
{

}

void SinglyLL :: Display()
{

}

int main()
{
    SinglyLL obj1;
    
    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains :"<<obj1.First<<"\n";
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";


    return 0;
}

