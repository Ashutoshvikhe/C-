//
//  Programme116.cpp
//  
//
//  Created by Ashutosh Vikhe on 07/04/21.
//  accept the file name from user and read first 10 words

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

//O_RDONLY   READ
//O_WRONLY   WRITE
//O_RDWR     READ AND WRITE
//O_CREAT    CREAT


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
        char Arr[40]={'\0'};
        read(fd,Arr,10);
        printf("%s",Arr);
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

