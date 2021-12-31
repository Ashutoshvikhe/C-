//
//  Programme108.cpp
//  
//
//  Created by Ashutosh Vikhe on 06/04/21.
//

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
    void Pattern   //Logic int main chya Waracha Part
    {              //From c Language
        char *ptr=str;
        int iCnt=0;
        char *s = str;
        while(*ptr !='\0')
        {
            while(*(s+iCnt)!='\0')
            {
                cout<<*s<<"\t";
                s++;
            }
            s=str;
            ptr++;
            iCnt++;
            cout<<"\n";
        }
    }
};
int main()
{
    StringX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
