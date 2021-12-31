//
//  Programme110.cpp
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
        int iCnt=0;
        while(iValue != 0)
        {
            iTemp=iValue;
            while(iTemp>0)
            {
                cout<<iTemp%10<<"\t";
                iTemp=iTemp/10;
            }
            cout<<"\n";
            iValue=iValue/10;
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
