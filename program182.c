/*
Doubly linear

x = for new line (new line add in this program with compare to singly linear )


InsertFirst
InsertLast
Display
Count
DeleteFirst
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

void Display(PNODE First)
{
    printf("Elements of linked list are\n");
    printf("NULL <=>");
    while(First != NULL)
    {
        printf("| %d |<=>",First->data);
        First = First ->next;

    }
    printf("NULL\n");
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL) // ll is empty
    {
        return;
    }
    else if((*First)->next == NULL)  // ll contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else  // ll contains more than 1 node
    {
        *First = (*First)->next;
        free((*First)->prev);   // x
        (*First)->prev = NULL; // x
    }

}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL) // ll is empty
    {
        return;
    }
    else if((*First)->next == NULL)  // ll contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else  // ll contains more than 1 node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}


int Count(PNODE First)
{
    int iCnt=0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}   


int main()
{
    PNODE Head= NULL;
    int iRet =0;

    

    InsertFirst(&Head,51);
    Display(Head);

     InsertFirst(&Head,21);
     Display(Head);

      InsertFirst(&Head,11);
        Display(Head);

      InsertLast(&Head,101);
      Display(Head);

      InsertLast(&Head,111);
      Display(Head);

      InsertLast(&Head,121);
      Display(Head);

      DeleteFirst(&Head);
      Display(Head);

      DeleteLast(&Head);

      Display(Head);

   
      
      iRet = Count(Head);
      printf("Number of elements are %d\n",iRet);


    return 0;
}