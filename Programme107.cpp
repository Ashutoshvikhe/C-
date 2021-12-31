//
//  Programme107.cpp
//  
//
//  Created by Ashutosh Vikhe on 05/04/21.
// String Length

#include <iostream>
using namespace std;
class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^\n]s",str);
    }
    int StrlenX()
    {
        int iCnt=0;
        char *ptr=str;
        while(*ptr !='\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }
};
int main()
{
    int Ret=0;
    StringX obj;
    obj.Accept();
    Ret=obj.StrlenX();
    cout<<"String Length is :"<<Ret<<"\n";
    return 0;
}
