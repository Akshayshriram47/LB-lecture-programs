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
void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));  // memory allocation

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

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));  // memory allocation

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

void InsertAtPosition(PPNODE First, PPNODE Last, int no, int ipos)
{
    PNODE newn = NULL;
    PNODE temp = *First;
    int iCnt=0;
    int NodeCnt = 0;
NodeCnt=Count(*First,*Last);
   

    if((ipos < 1) && (ipos > NodeCnt + 1))
    {
        printf("Invalid position\n");
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
         PNODE  newn = (PNODE)malloc(sizeof(NODE));  // memory allocation
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

void DeleteAtPosition(PPNODE First, PPNODE Last,  int ipos)
{
    int iCnt=0;
    int NodeCnt = 0;
    NodeCnt=Count(*First,*Last);
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    PNODE  newn = (PNODE)malloc(sizeof(NODE));  // memory allocation

    if((ipos < 1) && (ipos > NodeCnt))
    {
        printf("Invalid position\n");
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

void DeleteFirst(PPNODE First, PPNODE Last)
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

void DeleteLast(PPNODE First, PPNODE Last)
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

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are:\n");

    do
    {
        printf(" | %d |->",First->data);
        First = First->next;
    } while (First != Last->next);

    printf("\n");
        

}

int Count(PNODE First, PNODE Last)
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
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    InsertFirst(&Head, &Tail,51);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertFirst(&Head, &Tail,21);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertFirst(&Head, &Tail,11);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertLast(&Head, &Tail,101);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertLast(&Head, &Tail,111);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertLast(&Head, &Tail,121);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    InsertAtPosition(&Head, &Tail,105,5);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    DeleteAtPosition(&Head, &Tail,5);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    

    
    DeleteFirst(&Head, &Tail);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    DeleteLast(&Head, &Tail);
     Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d",iRet);


    return 0;
}