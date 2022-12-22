/*
singly linear



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

void InsertAtPosition(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0;
    PNODE newn = NULL;
    PNODE temp =NULL;
    int iCnt=0;

    NodeCnt = Count(*First);

    if((ipos <1 )|| (ipos >(NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE) malloc(sizeof(NODE));  // Allocate the memory

        newn ->data = no;
        newn ->next = NULL;

        temp = *First;

        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp = temp->next;
        }
    }
    newn->next = temp->next;
    temp->next =newn;


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



void DeleteAtposition(PPNODE First, int ipos)
{
    PNODE temp = NULL;
    PNODE temp2 = NULL;
    int iCnt=0;
    int NodeCnt=0;

    NodeCnt = Count(*First);

    if((ipos < 1)||(ipos >NodeCnt))
    {
        printf("invalid position\n");
        return;
    }
    
    if (ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteFirst(First);
    }
    else
    {
        temp = *First;

        for(iCnt=1; iCnt<ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp2 = temp->next;

        temp->next = temp2->next;  // temp ->next= temp ->next->next;
        free(temp2);
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

    int iChoice = 0, iPos = 0, iRet = 0, iNo = 0;
    
    printf("Welcome to the data structure application Copied by Marvellous Infosystems\n ");
    
    while(1)   // unconditional loop
    {
        printf("---------------------------------------------\n");
        printf("Please select the desired options : \n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete  node from first position\n");
        printf("5 : Delete  node from last position\n");
        printf("6 : Delete  node from given position\n");
        printf("7 : Display the contents of Linked list\n");
        printf("8 : Count number of nodes from linked list\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertFirst(&Head, iNo);
                break;

            case 2:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertLast(&Head, iNo);
                break;

            case 3:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPosition(&Head, iNo, iPos);
                break;

            case 4:
                DeleteFirst(&Head);
                break;

            case 5:
                DeleteLast(&Head);
                break;

    

            case 6:
                printf("Enter the position \n");
                scanf("%d", &iPos);
                
                DeleteAtposition(&Head, iPos);
                break;

                 
            case 7:
                Display(Head);
                break;

            case 8:
                iRet = Count(Head);
                printf("Nnumber of elements are : %d\n",iRet);
                break;

            case 9:
                printf("Thank you for using the application\n");
                return 0;

            default:
            printf("Invalid option\n");
            break;
                
               
        }
        printf("---------------------------------------------\n");

    }



    return 0;
}
