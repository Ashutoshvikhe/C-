//
//  Programme125.cpp
//  
//
//  Created by Ashutosh Vikhe on 11/05/21.
//

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyCL
{
private:
    PNODE Head;
    PNODE Tail;
    int iSize;
    
public:
    SinglyCL()
    {
        Head=NULL;
        Tail=NULL;
        iSize=0;
    }
    //         1
    void InsertFirst(int iValue)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn ->data=iValue;
        newn -> next=NULL;
        if((Head==NULL)&&(Tail==NULL))    // LL is empty
        {
            Head=newn;
            Tail=newn;
            iSize++;
            Tail->next=Head;
        }
        else                              //LL Contain at least one node  cas3
        {
            newn ->next=Head;
            Head=newn;
            iSize++;
            Tail->next=Head;
        }
    }
    //          2
    void InsertLast(int iValue)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn ->data=iValue;
        newn -> next=NULL;
        if((Head==NULL)&&(Tail==NULL))
        {
            Head=newn;
            Tail=newn;
        }
        else
        {
            Tail->next=newn;
            Tail=newn;          //tail=tail->next
        }
        iSize++;
        Tail->next=Head;
    }
    //       3
    int iCount()
    {
        return iSize;
    }
    
    //       4
    void Display()
    {
        PNODE temp = Head;
        int i = 0;
        for(i=1;i<=iSize;i++)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<"\n";
    }
    
    //         5
    void DeleteFirst()
    {
        if((Head==NULL)&&(Tail==NULL))    // LL is empty
        {
            return;
        }
        else if(iSize==1)                      //LL Contain at least one node  cas3
        {
            delete Head;
            Head= NULL;
            Tail=NULL;
            iSize--;
        }
        else
        {
            Head=Head->next;
            delete(Tail->next);
            Tail->next=Head;
            iSize--;
        }
    }
    
    //          6
    void DeleteLast()
    {
        if(iSize==0)    // LL is empty
        {
            return;
        }
        else if(iSize==1)                //LL Contain at least one node
        {
            delete Head;
            Head= NULL;
            Tail=NULL;
            iSize--;
        }
        else                  //LL Contain more than one node
        {
            PNODE temp=Head;
            int i=0;
            for(i=1;i<iSize-1;i++)
            {
                temp=temp->next;
            }
            delete Tail;
            Tail=temp;
            Tail->next=Head;
            iSize--;
        }
    }
     /*
    //          7
    void InsertAtPosition()
    {
        //singly linear linklist
    }
    
    //          8
    void DeleteAtPosition()
    {
        //singly linear linklist
    }
    */
};

int main()
{
    SinglyCL obj;
    int iChoice=1;
    int iRet=0,iPose=0,iNo=0;
    while (iChoice!=0)
    {
        cout<<"Enter Your Choice\n";
        cout<<"1:Insert First\n";
        cout<<"2:Insert Last\n";
        cout<<"3:Insert At Position\n";
        cout<<"4:Delete First\n";
        cout<<"5:Delete Last\n";
        cout<<"6:Delete At position\n";
        cout<<"7:Display The Content\n";
        cout<<"8:Count The number Of nodes\n";
        cout<<"0:Exit Application\n";
        cin>>iChoice;
        
        switch(iChoice)
        {
            case 1:
                cout<<"Enter the number\n";
                cin>>iNo;
                obj.InsertFirst(iNo);
                break;
            case 2:
                cout<<"Enter the number\n";
                cin>>iNo;
                obj.InsertLast(iNo);
                break;
            case 3:
                cout<<"Enter the number\n";
                cin>>iNo;
                cout<<"Enter the Position\n";
                cin>>iPose;
                //obj.InsertAtPosition(iNo);
                break;
            case 4:
                obj.DeleteFirst();
                break;
            case 5:
                obj.DeleteLast();
                break;
            case 6:
                cout<<"Enter the number\n";
                cin>>iNo;
                //obj.DeleteAtPosition(iPose);
                break;
                
            case 7:
                obj.Display();
                break;
                
            case 8:
                iRet=obj.iCount();
                cout<<"Number of elements are:"<<iRet<<"\n";
                break;
                
            case 0:
                cout<<"Thank You For Using The Application\n";
                break;
                    
            default:
                cout<<"Please enter procper option\n";
                break;
        
        }//End of switch case
        
    }//End of while loop
    
    return 0;
    
}// End of Main

