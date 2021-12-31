//
//  Programme123.c
//  
//
//  Created by Ashutosh Vikhe on 15/04/21.

/*
 //  LINEARFN LINKLIST
           1.SINGLY LINEAR LINKLIST      8
           2.SINGLY CIRCULAR LINKLIST    8
           3.DOUBLY LINEAR LINKLIST      8
           4.DOUBLY CIRCULAR LINKLIST    8
       
 */

//1.SINGLY LINEAR LINKLIST      8


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,  int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->Next = NULL;
    
    if(*Head == NULL)               // LL is empty
    {
        *Head = newn;
    }
    else                            // LL contains atleast one node
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,  int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->Next = NULL;
    if(*Head == NULL)                // LL is empty
    {
        *Head = newn;
    }
    else                             // LL contains atleast one node
    {
       while(temp->Next != NULL)
       {
           temp=temp->Next;
       }
       temp ->Next =newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->\t",Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> Next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head==NULL)                   //If LL is empty
    {
        return;
    }
    else if((*Head)->Next==NULL)     //If LL contain 1 node
    {
        free(*Head);                 //Delete the first node
        *Head=NULL;                 //Set null into first pointer
    }
    else                            //If LL contain more than 1 node
    {
        
        (*Head)=(*Head)->Next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head==NULL)                 //If LL is empty
    {
        return;
    }
    else if((*Head)->Next==NULL)   //If LL contain 1 node
    {
        free(*Head);              //Delete the first node
        *Head=NULL;              //Set null into first pointer
        
    }
    else                         //if LL contain more than 1 node
    {
        while(Temp->Next->Next!= NULL)
        {
            Temp=Temp->Next;
        }
        free(Temp ->Next);
        Temp->Next=NULL;
    }
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;
    
    InsertFirst(&First,51);      // InsertFirst(60,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    
    InsertLast(&First,111);
    InsertLast(&First,101);
    
    printf("Actual nodes\n");
    Display(First);
    
    DeleteFirst(&First);
    printf("Node after delete first\n");
    Display(First);
    
    DeleteLast(&First);
    printf("Node after delete last\n");
    Display(First);
    
    return 0;
}

