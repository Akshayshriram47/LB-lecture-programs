/*
Doubly linear

x = for new line (new line add in this program with compare to singly linear )

InsertLast
*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct nodde *prev;   // x  

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));

    newn ->data = no;
    newn ->next =NULL;
    newn ->prev=NULL;    // x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> next= *First;
        (*First)->prev = newn; // x
        *First = newn;
    }



}

void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    PNODE temp = *First;
    newn ->data = no;
    newn ->next =NULL;
    newn ->prev=NULL;    // x

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next=newn;
        newn->prev=temp; // x
    }



}

int main()
{
    PNODE Head= NULL;

    return 0;
}