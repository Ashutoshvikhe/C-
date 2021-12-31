//
//  Programme127.cpp
//  
//
//  Created by Ashutosh Vikhe on 18/05/21.
//

#include <iostream>
using namespace std;

class Stack
{
private:
    int *Arr;
    int iSize;
    int iTop;
    
public:
    Stack(int)
    ~Stack();
    void push(int)
    int pop();
    void Display();
    
};
Stack::stack(int iNo)
{
    iSize=iNo;
    iTop=-1;
    Arr=new int [iSize];
}
Stack::~Stack()
{
    delete[]=Arr;
}

void Stack::push(int iNo)
{
    if(iTop==iSize-1)
    {
        cout<<"Stack is full\n";
    }
    else
    {
        iTop++;
        Arr[iTop]=iNo;
    }
}

int Stack::pop()
{
    if(iTop==-1)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        int iNo=Arr[iTop];
        iTop--;
        return iNo;
    }
}
void stack ::Display()
