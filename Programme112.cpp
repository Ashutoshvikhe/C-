//
//  Programme112.cpp
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
    int WordCount()
    {
        int iCnt =0;
        char *ptr=str;
        
        while(*ptr != '\0')
        {
            if (*ptr ==' ')
            {
                while((*ptr ==' ')&&(*ptr !='\0'))
                {
                    ptr++;
                }
            }
            else
            {
                iCnt++;
                while((*ptr !=' ')&&(*ptr !='\0'))
                {
                    ptr++;
                }
            }
        }
        return iCnt;
    }
};
int main()
{
    int iRet=0;
    StringX obj;
    obj.Accept();
    iRet=obj.WordCount();
    cout<<"Word Count is:"<<iRet<<"\n";
    return 0;
}
