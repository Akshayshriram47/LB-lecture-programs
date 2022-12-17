/* **************  Data structure  ********************

               singly linear linked list in c++ 
                         -> -> -> -> 

        InsertFirst
        InsertLast

        DeleteFirst
        DeleteLast

        InsertAtPosition
        DeleteAtPosition
        
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
        PNODE temp = First;  // temporary pointer

        while(temp->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = newn;
        iCount++;

    }

}

///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: InsertAtPosition(int no, int ipos) // define the fun outside the class
{
    if((ipos<1)||(ipos>iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE; // memory allocation

        newn->data = no;
        newn->next = NULL;

        PNODE temp = First;

        for(int iCnt = 1; iCnt <ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}
///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteFirst( ) // define the fun outside the class
{
    if(First == NULL)  // if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;  // temporary pointer
        First = First->next;
        delete temp;
        iCount--;
    }
}
///////////////////////////////////////////////////////////////////////////////////

void SinglyLL :: DeleteLast( ) // define the fun outside the class
{
     if(First == NULL)  // if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
            temp =temp->next;

        }
        delete temp->next;
        temp->next= NULL;

        iCount--;
    }   
}
///////////////////////////////////////////////////////////////////////////////////
void SinglyLL :: DeleteAtPosition(int ipos ) // define the fun outside the class
{
     if((ipos<1)||(ipos>iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First; // temporary pointer

        for(int iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        PNODE temp2 = temp1->next; // temporary pointer

        temp1->next = temp2->next;
        delete temp2;

        iCount--;

    }

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

    obj1.Display();
    cout<<"Numbers of nodes in first linked list are :"<<obj1.iCount<<"\n";

///////////////////////////////////////////////////////////////////////////////////

    obj1.InsertLast(101);
    obj1.InsertLast(111);    
    obj1.InsertLast(121);

    obj1.Display();
    cout<<"\nNumbers of nodes in second linked list are :"<<obj1.iCount<<"\n";

    obj1.InsertAtPosition(105,5);
    obj1.Display();
    cout<<"\nNumbers of nodes in second linked list are :"<<obj1.iCount<<"\n";

    obj1.DeleteAtPosition(5);
    obj1.Display();
    cout<<"\nNumbers of nodes in second linked list are :"<<obj1.iCount<<"\n";



    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"\nNumbers of nodes in second linked list are :"<<obj1.iCount<<"\n";


    return 0;
}

