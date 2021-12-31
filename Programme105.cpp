//
//  Programme105.cpp
//  
//
//  Created by Ashutosh Vikhe on 05/04/21.
//

#include <iostream>
using namespace std;
class Arithmatic
{
public:                     //Access Specifire
    int iNo1,iNo2;          //Chractristics
    
    void Accept()           //Behaviour
    {
        cout<<"Enter First Number\n";
        cin>>iNo1;
        cout<<"Enter Second Number\n";
        cin>>iNo2;
    }
    int Addition()            //Behaviour
    {
        int iResult=0;
        iResult=iNo1+iNo2;
        return iResult;
    }
    int Substraction()         //Behaviour
    {
        int iResult=0;
        iResult=iNo1-iNo2;
        return iResult;
    }
};
int main()
{
    int iRet1=0,iRet2=0;
    Arithmatic obj1;           //Object Creation
    Arithmatic obj2;
    
    obj1.Accept();
    iRet1= obj1.Addition();
    cout<<"Addition is:"<<iRet1<<"\n";
    
    obj2.Accept();
    iRet2=obj2.Substraction();
    cout<<"Substarction is:"<<iRet2<<"\n";
    return 0;
}
