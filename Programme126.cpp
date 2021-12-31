 //
//  Programme126.cpp
//  
//
//  Created by Ashutosh Vikhe on 18/05/21.
//  Accept n numbers from user and perform the addition of numbers

#include <iostream>
using namespace std;

class Array
{
private:
    int *Arr;   //Pointer  //Characteristic
    int iSize;  //Integer
public:
    Array(int);  //PROTOTYPE
    ~Array();
    void Accept();
    void Display();
    int Addition();
};

Array :: Array(int iNo) //Dynamic Memory Allocation
{
    cout<<"Inside Constructor\n";
    iSize=iNo;      //COUNT
    Arr= new int[iSize];
}
Array :: ~Array()  //DISROUCTOR
{
    cout<<"Inside Distructor\n";
    delete []Arr;
}
void Array::Accept()
{
    cout<<"Enter the elements\n";
    for(int i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
}
void Array::Display()
{
    cout<<"Elements of array are:\n";
    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}
int Array::Addition()
{
    int iSum=0;
    for(int i=0;i <iSize;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}
int main()
{
    int iNo=0,iRet=0;
    cout<<"Enter the size of array\n";
    cin>>iNo;
    
    Array *obj=new Array(iNo); //Call of Constructor
    
    obj->Accept();
    obj->Display();
    
    iRet=obj->Addition();
    cout<<"Addition of all elements is:"<<iRet<<"\n";
    
    delete obj;//Call to destructor
    
    return 0;
}
