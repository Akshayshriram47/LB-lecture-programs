/*
    ****************  Data structure  ********************

  DATE:      15/12/2022
 
               doubly circular linked list in c++
                c to c++ convert processing step wise in c++
                         

       
        InsertFirst
        InsertLast
        Display
        Count
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
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

class DoublyCl
{
    public:
        PNODE First;
        PNODE Last;


        DoublyCl();

        void InserFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no , int ipos);

        void DeleteFirst();
        void DeleteLast( );
        void DeleteAtPosition( int ipos);

        void Display();
        int Count();
};

/*
Return_type Class_Name :: Function_Name() 
{

}
*/

DoublyCl :: DoublyCl ()  // default constructor
{
    First == NULL;
    Last == NULL;
}

void DoublyCl :: InserFirst(int no)
{
    PNODE newn = new NODE;  // memory allocation

    newn ->data = no;
    newn->next = NULL;
    newn ->prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last  = newn;
    }
    else  // LL contains one or more than one nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;


    }
    
    (First)->prev = Last;
    (Last) ->next = First;

}
/////////////////////////////////////////////////////////

void DoublyCl :: InsertLast( int no)
{
     PNODE newn = new NODE ;  // memory allocation

    newn ->data = no;
    newn->next = NULL;
    newn ->prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last  = newn;
    }
    else  // LL contains one or more than one nodes
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;


    }
    
    (First)->prev = Last;
    (Last) ->next = First;
}
////////////////////////////////////////////////////////////

void DoublyCl::  Display()
{
    PNODE temp = First;

    if(First == NULL  && Last == NULL)
    {
        cout<<"Linked list is empty "<<"\n";
        return;
    }

    cout<<"Elements of linked list are :"<<"\n";
    do
    {
        cout<<"| " <<temp ->data <<"|<=>" ;
        temp = temp-> next;
    } while (temp != Last->next);

    cout<<"\n";
    
}

////////////////////////////////////////////////////////

int  DoublyCl :: Count()
{
    PNODE temp = First;
    int iCnt=0;
    if(First == NULL  && Last == NULL)
    {
        return iCnt;
    }

    cout<<"Elements of linked list are : "<<"\n";
    do
    {
        iCnt++;
        temp = temp-> next;
    } while (temp != Last->next);

    return iCnt;
    
}

/////////////////////////////////////////////////////////////

void DoublyCl :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        return;

    }
    else if(First == Last)  // single node
    {
        delete (First);
        First == NULL;
        Last == NULL;

    }
    else   // More than one node
    {
        First = (First)->next;
        delete((Last)->next);   // free((*First)->prev);

        (First)->prev = Last;
        (Last)->next = First;
    }

    
}

/////////////////////////////////////////////////////////

void DoublyCl::DeleteLast()
{
    if((First == NULL) && (Last == NULL))   // Empty LL
    {
        return;

    }
    else if(First == Last)  // single node
    {
        delete (First); // free (*Last);
        First == NULL;
        Last == NULL;
    }
    else   // More than one node
    {
        Last = (Last)->prev;
        delete((First)->prev);   // free(*Last)->next;

        (First)->prev = Last;
        (Last)->next = First;   // circular nature maintained
    }

}
/////////////////////////////////////////////////////////////////

void  DoublyCl::InsertAtPosition(int no, int ipos)
{
    int iNodeCnt = Count();

    PNODE newn = NULL;
    PNODE temp = NULL;  // temporary pointer

    int iCnt =0;


    if((ipos <1)&&(ipos>iNodeCnt+1))
    {
        cout<<("Invalid position")<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InserFirst( no);
    }
    else if (ipos == iNodeCnt+1)
    {
        InsertLast( no);
    }
    else
    {
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn ->prev = NULL;

        temp = First;

        for(iCnt=1; iCnt<ipos-1 ; iCnt++)
        {
            temp = temp->next;

        }

            newn->next = temp->next;
            temp->next->prev = newn;

            temp->next = newn;
            newn->prev = temp;
    
    }
        

}
/////////////////////////////////////////////////////////

void  DoublyCl::DeleteAtPosition(  int ipos)
{
    int iNodeCnt = Count();

    PNODE temp = NULL;  // temporary pointer

    int iCnt =0;


    if((ipos <1)&&(ipos>iNodeCnt))
    {
        cout<<("Invalid position")<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
       
        temp = First;

        for(iCnt=1; iCnt<ipos-1 ; iCnt++)
        {
            temp = temp->next;

        }

           temp->next = temp->next ->next;
           delete((temp->next->prev));
           temp->next ->prev = temp;
    }
        

}

////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    DoublyCl obj;

    obj.InserFirst(51);
    obj.InserFirst(21);
    obj.InserFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

/////////////////////////////////////////////////////

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(151);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
////////////////////////////////////////////////////

    obj.InsertAtPosition(105,5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
////////////////////////////////////////////////////////

   obj. DeleteAtPosition(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

/////////////////////////////////////////////////////////////

    obj.DeleteFirst();
    obj.Display();
    iRet =obj. Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
///////////////////////////////////////////////////////

    obj.DeleteLast();
    obj.Display();
    iRet =obj. Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";




    return 0;
}