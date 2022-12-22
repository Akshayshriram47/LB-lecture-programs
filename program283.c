/*
singly linear

        To find digit Addition independentely from the linked list

        INPUT  :
        OUTPUT :

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


int SumDigits(int iNo)
{
    int iSum=0, iDigit =0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum= iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

void DisplayDigitsSum(PNODE First)
{
    int iRet =0;

    while(First != NULL)
    {
        iRet = SumDigits(First->data);
        printf("Addition of digits of the number %d is %d\n",First->data,iRet);
        First = First->next;
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
