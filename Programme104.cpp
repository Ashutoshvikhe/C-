//
//  Programme104.cpp
//  
//
//  Created by Ashutosh Vikhe on 05/04/21.
// With  Object Oriantation 

#include <iostream>
using namespace std;
class Arithmatic
{
public:                 //Access Specifire
    int iNo1,iNo2;      //Chractristics
    
    void Accept()       //Behaviour
    {
        cout<<"Enter First Number\n";
        cin>>iNo1;
        cout<<"Enter Second Number\n";
        cin>>iNo2;
    }
    int Addition()          //Behaviour
    {
        int iResult=0;
        iResult=iNo1+iNo2;
        return iResult;
    }
    int Substraction()     //Behaviour
    {
        int iResult=0;
        iResult=iNo1-iNo2;
        return iResult;
    }
};
int main()
{
    int iRet=0;
    Arithmatic obj;       //Object Creation
    obj.Accept();
    iRet = obj.Addition();
    cout<<"Addition is:"<<iRet<<"\n";
    iRet=obj.Substraction();
    cout<<"Substarction is:"<<iRet<<"\n";
    return 0;
}

