/*
singly linear

        To find digit Addition independentely from the linked list

        INPUT  : Elements from the linkedlist are :
                | 11 |-> | 21 |-> | 51 |-> | 101 |-> | 111 |-> | 121 |-> NULL
        OUTPUT :
                Addition of digits of the number 11 is 2
                Addition of digits of the number 21 is 3
                Addition of digits of the number 51 is 6
                Addition of digits of the number 101 is 2
                Addition of digits of the number 111 is 3
                Addition of digits of the number 121 is 4

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



void DisplayDigitsSum(PNODE First)
{
    int iNo =0, iSum=0 , iDigit =0;

    while(First != NULL)
    {
        iNo = First->data;
        while(iNo !=0)
        {
            iDigit = iNo % 10;
            iSum= iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("Addition of digits of the number %d is %d\n",First->data,iSum);
        First = First->next;
        iSum = 0;

        
    }
    
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

    DisplayDigitsSum(Head);

    return 0;
}
