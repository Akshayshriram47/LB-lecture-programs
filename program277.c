/*
singly linear

perform the addition and return the addition


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


int main()
{
 
    PNODE Head = NULL;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    return 0;
}
