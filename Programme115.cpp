//
//  Programme115.cpp
//  
//
//  Created by Ashutosh Vikhe on 07/04/21.
//

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
        fd=creat(Name,0777);
        //this command is also used to create a new file
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
};
int main()
{
    char str[30];
    cout<<"Enter the File name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}

