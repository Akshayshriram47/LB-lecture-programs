/*
    ****************  Data structure  ********************

  DATE:      11/12/2022
 
               singly circular linked list in c++
                         

       
        InsertFirst
        InsertLast
        DeleteFirst  with temp poniter
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

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();
       
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no , int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
        int  Count();
};
/*
    return_value Class_Name :: Function_Name()
    {

    }

*/


void SinglyCL ::InsertFirst( int no)
{
   // PNODE newn = (PNODE)malloc(sizeof(NODE));  // memory allocation
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL)&&(*Last == NULL))  // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else  // LL contains atleast one node
    {
        newn ->next = *First;
        *First= newn;
        (*Last)->next = *First;  // circular linkedlist maintained
    }

}

void SinglyCL :: InsertLast( int no)
{
   // PNODE newn = (PNODE)malloc(sizeof(NODE));  // memory allocation
        PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL)&&(*Last = NULL))  // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else  // LL contains atleast one node
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }

}

void SinglyCL :: InsertAtPosition( int no, int ipos)
{
    PNODE newn = NULL;
    PNODE temp = *First;
    int iCnt=0;
    int NodeCnt = 0;
NodeCnt=Count(*First,*Last);
   

    if((ipos < 1) && (ipos > NodeCnt + 1))
    {
        cout<<("Invalid position")<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, Last, no);
    }
    else if(ipos == NodeCnt +1)
    {
        InsertLast(First, Last, no);
    }
    else
    {
         //PNODE  newn = (PNODE)malloc(sizeof(NODE));  // memory allocation
             PNODE newn = new NODE;

         
         newn->data = no;
         newn->next = NULL;

         for(iCnt =1; iCnt < ipos -1; iCnt++)
         {
            temp = temp->next;
         }
         newn->next = temp->next;
         temp->next = newn;
    }
}

void SinglyCL :: DeleteAtPosition(int ipos)
{
    int iCnt=0;
    int NodeCnt = 0;
    NodeCnt=Count(*First,*Last);
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    PNODE  newn = (PNODE)malloc(sizeof(NODE));  // memory allocation

    if((ipos < 1) && (ipos > NodeCnt))
    {
        cout<<("Invalid position")<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First, Last);
    }
    else
    {
        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        free(temp2);
    }
}

void SinglyCL :: DeleteFirst()
{
    PNODE temp = *First; // Temporary pointer

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        return;
    }
    else if(*First == *Last)  // LL conatins one node & must be in second position
    {
        free(*First);    // both are free the memory
       // free(*Last);

       *First = NULL;   // Both are pointing to null
       *Last = NULL;
    }
    else  // LL contains more than one node
             // with temp pointer used
    {
       *First = (*First)->next;
       free(temp);
       (*Last)->next = *First;

    }
}

void SinglyCL :: DeleteLast()
{
    PNODE temp =*First;

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        return;
    }
    else if(*First == *Last)  // LL conatins one node & must be in second position
    {
        free(*First);  // both are free the memory
       // free(*Last);

       *First = NULL;   // Both are pointing to null
       *Last = NULL;
    }
    else  // LL contains more than one node
    {
       while(temp->next != *Last)
       {
            temp = temp->next;
       } 
       free(*Last);   // free(temp->next);
       *Last = temp;
       (*Last)->next = *First;
    }
}

void  SinglyCL ::Display()
{
    cout<<("Elements of Linked list are:")<<"\n";

    do
    {
        cout<<(" | %d |->",First->data)<<"\n";
        First = First->next;
    } while (First != Last->next);

    cout<<"\n";
        

}

int SinglyCL :: Count()
{
    int iCnt=0;

    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);

    return iCnt;
        

}
int main()
{
    SinglyCL obj;

    int iRet = 0;

    obj.InsertFirst(51);
     obj.Display();
    iRet = obj.Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

    obj.InsertFirst(21);
    obj. Display();
    iRet = obj.Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

   obj. InsertFirst(11);
    obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";
    
    obj.InsertLast(101);
    obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

    obj.InsertLast(111);
    obj. Display();
    iRet = obj.Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

    obj.InsertLast(121);
    obj. Display();
    iRet = obj.Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

    obj.InsertAtPosition(105,5);
    obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

   obj. DeleteAtPosition(5);
    obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";
    

    
   obj. DeleteFirst();
    obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

   obj. DeleteLast();
   obj.  Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

   obj. Display();
    iRet =obj. Count();
    cout<<("Number of elements are : "<<iRet)<<"\n";

    return 0;
}