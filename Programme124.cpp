 //
//  Programme124.cpp
//  
//
//  Created by Ashutosh Vikhe on 10/05/21.


// 1.SINGLY LINEAR LINKLIST

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyLL
{
private:
    PNODE Head;
    int iSize = 0;
    
public:
    SinglyLL() // Default Constructor
    {
        Head=NULL;
        iSize=0;
    }
    
    //   1
    
    int Count() // 0 is the value of
    {
        return iSize;
    }
    
    //    2
    
    void InsertFirst(int iValue)
    {
        PNODE newn =NULL;
        newn=new NODE;
        newn->next=NULL;
        
        if(Head==NULL)     // LL is empty
        {
            Head = newn;
        }
        else         //LL Contain at least one node
        {
            newn->next = Head;
            Head = newn;
        }
        iSize++;
    }
    
    //      3
    
    void InsertLast(int iValue)
    {
        PNODE newn =NULL;
        newn=new NODE;
        newn->next=NULL;
        
        PNODE temp=Head;
        
        if(Head==NULL)     // LL is empty
        {
            Head = newn;
        }
        else         //LL Contain at least one node
        {
            while(temp -> next != NULL)
            {
                temp=temp->next;
            }
            temp ->next=newn;
        }
        iSize++;
    }
    
    //    4
    
    void DeleteFirst(int iValue)
    {
        
        if(Head==NULL)     // LL is empty
        {
            return;
        }
        else if(Head -> next==NULL)
        {
            delete Head;
            Head=NULL;
            iSize--;
        }
        else
        {
            PNODE temp=Head;
            while(temp ->next->next != NULL)
            {
                temp=temp->next;
            }
            delete(temp ->next);
            temp->next=NULL;
            iSize--;
        }
    }
    
    //     5
    
    void DeleteLast(int iValue)
    {
        
        if(Head==NULL)     // LL is empty
        {
            return;
        }
        else
        {
            
        }
    }
    
    //      7
    void Display()
    {
        PNODE temp=Head;
        while(temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp ->next;
        }
        cout<<"\n";
    }
    
    
    
};
int main()
{
    int iChoice =1;
    int iNo=0;
    SinglyLL obj1;
    while (iChoice != 0)
    {
        cout<<"Enter your choice:"<<"\n";
        cout<<"1:Insert at First Position"<<"\n";
        cout<<"2:Insert At Last position"<<"\n";
        cout<<"3:Insert Given Position"<<"\n";
        cout<<"4:Delete First node"<<"\n";
        cout<<"5:Delete last node"<<"\n";
        cout<<"6:Delete Given Position"<<"\n";
        cout<<"7:Display The Content"<<"\n";
        cout<<"8:Count The number Of nodes"<<"\n";
        cout<<"0:Exit Application"<<"\n";
        cin>>iChoice;
        
        switch(iChoice)
        {
            case 1:
                cout<<"Enter the number\n";
                cin>>iNo;
                obj1.InsertFirst(iNo);
                break;
            case 2:
                cout<<"Enter the number\n";
                cin>>iNo;
                obj1.InsertLast(iNo);
                break;
            case 3:
                break;
            case 4:
                    obj1.DeleteFirst();
                break;
            case 5:
                    obj1.DeleteLast();
                break;
            case 6:
                break;
                
            case 7:
                obj.Display();
                break;
                
            case 8:
                iNo=obj1.Count();
                cout<<"Number of elements are:"<<iNo<<"\n";
                break;
                
            case 0:
                cout<<"Thank You For Using The Application\n";
                break;
            default:
                cout<<"Please enter procper option\n";
                break;
        }
    }
    return 0;
}
