/*

DeleteFirst
Display
count


*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node  // declaration
{
    int data;
    struct node *next;  // member of structure
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));  // 1 Allocate the memory

    newn ->data = no;

    newn->next = NULL;

    if(*First == NULL)  // if linkedlist is empty
    {
        *First = newn;
    }
    else       // if linked list contains atleast one node
    {
        newn ->next = *First;
        *First = newn;
    }


}

void InsertLast(PPNODE First, int no) 
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));  // 2 Allocate the memory

    PNODE temp = *First;  // temporary pointer

    newn ->data = no;
    newn->next = NULL;

    if(*First == NULL)  // if linkedlist is empty
    {
        *First = newn;
    }
    else       // if linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;

    }


}


void Display(PNODE First)
{
    printf("Elements from the linkedlist are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First ->next;

    }

    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt=0;
    while(First != NULL)
    {
       iCnt++;
        First = First ->next;

    }
    return iCnt;

}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL) // empty linkedlist
    {
        return;
    }
    else if((*First) ->next == NULL) // 1 node in linkedlist
    {
        free(*First);
        *First = NULL;
    }
    else // more than one node in linkedlist
    {
        (*First) = (*First)->next;
        free(temp);
    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL) // empty linkedlist
    {
        return;
    }
    else if((*First) ->next == NULL) // 1 node in linkedlist
    {
        free(*First);
        *First = NULL;
    }
    else // more than one node in linkedlist
    {
       while(temp->next->next !=NULL)
       {
            temp = temp-> next;
       }
       free(temp->next);
       temp->next=NULL; 
    }


}

int main()
{
 // (struct node *) head = NULL;
    PNODE         Head = NULL;

    int iRet= 0;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet=Count(Head);
    printf("Number of nodes are %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    
    Display(Head);

    iRet=Count(Head);
    printf("Number of nodes are %d\n",iRet);

    DeleteFirst(&Head);
     Display(Head);

    iRet=Count(Head);
    printf("Number of nodes are %d\n",iRet);

    DeleteLast(&Head);
     Display(Head);

    iRet=Count(Head);
    printf("Number of nodes are %d\n",iRet);

    return 0;
}



