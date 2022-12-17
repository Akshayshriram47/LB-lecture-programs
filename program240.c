/*
    ****************  Data structure  ********************

  DATE:      15/12/2022
 
               doubly circular linked list in c
                         

       
        InsertFirst
        InsertLast
        Display
        Count
       
*/

#include<stdio.h>
#include<stdlib.h>

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


void InserFirst(PPNODE First, PPNODE Last ,int no)
{
    PNODE newn = (PNODE)malloc (sizeof(NODE));  // memory allocation

    newn ->data = no;
    newn->next = NULL;
    newn ->prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        *First = newn;
        *Last  = newn;
    }
    else  // LL contains one or more than one nodes
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;


    }
    
    (*First)->prev = *Last;
    (*Last) ->next = *First;

}
/////////////////////////////////////////////////////////

void InsertLast(PPNODE First, PPNODE Last, int no)
{
     PNODE newn = (PNODE)malloc (sizeof(NODE));  // memory allocation

    newn ->data = no;
    newn->next = NULL;
    newn ->prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        *First = newn;
        *Last  = newn;
    }
    else  // LL contains one or more than one nodes
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;


    }
    
    (*First)->prev = *Last;
    (*Last) ->next = *First;
}
////////////////////////////////////////////////////////////

void Display(PNODE First, PNODE Last)
{

    if(First == NULL  && Last == NULL)
    {
        printf("Linked list is empty \n");
        return;
    }

    printf("Elements of linked list are : \n");
    do
    {
        printf("| %d |<=>", First ->data);
        First = First-> next;
    } while (First != Last->next);

    printf("\n");
    
}

////////////////////////////////////////////////////////

int Count(PNODE First, PNODE Last)
{
    int iCnt=0;
    if(First == NULL  && Last == NULL)
    {
        return iCnt;
    }

    printf("Elements of linked list are : \n");
    do
    {
        iCnt++;
        First = First-> next;
    } while (First != Last->next);

    return iCnt;
    
}
/////////////////////////////////////////////////////////////
int main()
{
    int iRet = 0;

    PNODE Head = NULL;
    PNODE Tail = NULL;

    InserFirst(&Head,&Tail,51);
    InserFirst(&Head,&Tail,21);
    InserFirst(&Head,&Tail,11);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

/////////////////////////////////////////////////////

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,151);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);


    return 0;
}