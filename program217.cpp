/* **************  Data structure  ********************

               singly linear linked list in c++ 
                         -> -> -> -> 

        InsertFirst
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
///////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: InsertFirst(int no) // define the fun outside the class
{
    // step 1: Allocate the memory for node

    PNODE newn = new NODE;

    // step 2: Initialize node
    newn->data = no;
    newn ->next = NULL;

    // step 3: Check if LL is empty or not

    if(First == NULL)   // if (iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else // if LL contains atleast one node
    {
        newn ->next = First;
        First = newn;
        iCount++;
    }

}

///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: InsertLast(int no) // define the fun outside the class
{
    // step 1: Allocate the memory for node

    PNODE newn = new NODE;

    // step 2: Initialize node
    newn->data = no;
    newn ->next = NULL;

    // step 3: Check if LL is empty or not

    if(First == NULL)  // if (iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else // if LL contains atleast one node
    {

    }

}

///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: InsertAtPosition(int no, int ipos) // define the fun outside the class
{

}
///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst( ) // define the fun outside the class
{

}
///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast( ) // define the fun outside the class
{

}
///////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: DeleteAtPosition(int ipos ) // define the fun outside the class
{

}
///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: Display()
{
    cout<<"Elements of Linkedlist are :"<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" |->";
        temp = temp ->next;
    }
    cout<<"NULL"<<"\n";
}
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    cout<<"Linked list of first object is :"<<"\n";

    obj1.Display();
    cout<<"Numbers of nodes in first linked list are :"<<obj1.iCount<<"\n";

///////////////////////////////////////////////////////////////////////////////////

    obj2.InsertFirst(1001);
    obj2.InsertFirst(510);
    obj2.InsertFirst(210);
    obj2.InsertFirst(110);
    cout<<"\nLinked list of second object is :"<<"\n";

    obj2.Display();
    cout<<"Numbers of nodes in second linked list are :"<<obj2.iCount<<"\n";


    return 0;
}

