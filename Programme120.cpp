//
//  Programme120.cpp
//  
//
//  Created by Ashutosh Vikhe on 07/04/21.
// Accept the file from user and display all the data from the file

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd=open(Name,O_RDONLY);
        if(fd==-1)
        {
            cout<<"Unable to creat file\n";
        }
        else
        {
            cout<<"File succesfully open\n";
        }
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
        char Arr[10];
        int ret= 0;
        while((ret=read(fd,Arr,10)) != 0)
        {
            write(1,Arr,ret);
        }
    }
};
int main()
{
    char str[30];
    cout<<"Enter the File name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}
