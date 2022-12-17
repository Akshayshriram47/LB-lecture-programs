/*
    ****************  Data structure  ********************

  DATE:      15/12/2022
 
               doubly circular linked list in c
                         

       
        InsertFirst
        InsertLast
        Display
        Count
        DeleteFirst
        DeleteLast
        InsertAtPosition
        DeleteAtPosition
       
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

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))   // Empty LL
    {
        return;

    }
    else if(*First == *Last)  // single node
    {
        free (*First);
        *First == NULL;
        *Last == NULL;

    }
    else   // More than one node
    {
        *First = (*First)->next;
        free((*Last)->next);   // free((*First)->prev);

        (*First)->prev = *Last;
        (*Last)->next = *First;
    }

    
}

/////////////////////////////////////////////////////////

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))   // Empty LL
    {
        return;

    }
    else if(*First == *Last)  // single node
    {
        free (*First); // free (*Last);
        *First == NULL;
        *Last == NULL;
    }
    else   // More than one node
    {
        *Last = (*Last)->prev;
        free((*First)->prev);   // free(*Last)->next;

        (*First)->prev = *Last;
        (*Last)->next = *First;   // circular nature maintained
    }

}
/////////////////////////////////////////////////////////////////

void InsertAtPosition(PPNODE First, PPNODE Last, int no, int ipos)
{
    int iNodeCnt = Count(*First, *Last);

    PNODE newn = NULL;
    PNODE temp = NULL;  // temporary pointer

    int iCnt =0;


    if((ipos <1)&&(ipos>iNodeCnt+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InserFirst(First, Last , no);
    }
    else if (ipos == iNodeCnt+1)
    {
        InsertLast(First, Last, no);
    }
    else
    {
        newn = (PNODE)malloc (sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn ->prev = NULL;

        temp = *First;

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

void DeleteAtPosition(PPNODE First, PPNODE Last,  int ipos)
{
    int iNodeCnt = Count(*First, *Last);

    PNODE temp = NULL;  // temporary pointer

    int iCnt =0;


    if((ipos <1)&&(ipos>iNodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if (ipos == iNodeCnt)
    {
        DeleteLast(First, Last);
    }
    else
    {
       
        temp = *First;

        for(iCnt=1; iCnt<ipos-1 ; iCnt++)
        {
            temp = temp->next;

        }

           temp->next = temp->next ->next;
           free((temp->next->prev));
           temp->next ->prev = temp;
    }
        

}

////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////

    InsertAtPosition(&Head,&Tail,105,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

////////////////////////////////////////////////////////

    DeleteAtPosition(&Head,&Tail,5);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);


/////////////////////////////////////////////////////////////

    DeleteFirst(&Head, &Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

///////////////////////////////////////////////////////

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);




    return 0;
}