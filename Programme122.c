#include<stdio.h>
#include<stdlib.h>

struct node   ////  structure declaration
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;     //* is not used  another name given
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,  int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE)); //hat var karane
    
    newn->Data = No;      //basavane
    newn->Next = NULL;    //hat khali ghene
    
    if(*Head == NULL)               // LL is empty
    {
        *Head = newn;
    }
    //differnt
    else                            // LL contains atleast one node
    {
        newn->Next = *Head;           //navin porane hat thevala junya poravar
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\n",Head->Data);
        Head = Head -> Next;              //->  used for pointer ++
    }
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

int main()
{
    int iRet = 0;
    PNODE First = NULL;
    
    InsertFirst(&First,51);         // InsertFirst(60,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);                 // Display(100)
    iRet = Count(First);
    
    printf("Number of nodes are : %d\n",iRet);
    return 0;
}
