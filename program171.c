/*

InsertFirst
Display


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

    newn ->data = no;

    newn->next = NULL;

    if(*First == NULL)  // if linkedlist is empty
    {
        *First = newn;
    }
    else       // if linked list contains atleast one node
    {

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

int main()
{
 // (struct node *) head = NULL;
    PNODE         Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);


    return 0;
}



