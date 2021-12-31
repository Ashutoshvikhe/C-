//
//  Programme106.cpp
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
    
    Arithmatic(int x,int y)  //Constructor
    {
        iNo1=x;
        iNo2=y;
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
    Arithmatic obj1(10,11);      //Object Creation
    Arithmatic obj2(20,15);      //Object Creation
    
    iRet1= obj1.Addition();
    cout<<"Addition is:"<<iRet1<<"\n";
    
    iRet2=obj2.Substraction();
    cout<<"Substarction is:"<<iRet2<<"\n";
    return 0;
}

