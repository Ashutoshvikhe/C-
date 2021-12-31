//
//  Programme111.cpp
//  
//
//  Created by Ashutosh Vikhe on 06/04/21.
//

#include <iostream>
using namespace std;

class Number
{
public:
    int iNo;
    void Accept()
    {
        cout<<"Enter Numbers\n";
        cin>>iNo;
    }
    void Pattern()
    {
        int iTemp=0;
        int iValue = iNo;
        int iCnt=0,i=0,j=0;
        while(iValue>0)
        {
            iCnt++;
            iValue=iValue/10;
        }
        iValue = iNo;
        for(i=iCnt;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                cout<<iValue%10<<"\t";
                iValue=iValue/10;
            }
            cout<<"\n";
            iValue=iNo;
        }
    }
};
int main()
{
    Number obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
