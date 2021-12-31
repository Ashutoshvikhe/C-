//
//  Programme161.c
//  
//
//  Created by Ashutosh Vikhe on 19/05/21.
//  Accepts the number from user and display the number of stars *
//  Recursion Programme

#include <stdio.h>

void DisplayI()    //By Using Itration
{
    int i=0;
    
    printf("By Using Itration\n");
    //  1     2   3
    for(i=1;i<=4;i++)
    {
        printf("*\n"); // 4
    }
    printf("\n");
}

void DisplayR()   // By Using Recursion
{
    static int i=1;   //Local Variable  1
    if(i<=4)   // 2
    {
        printf("*\n");   // 4
        i++;             // 3
        DisplayR();     //Recursive Call
    }
}
int main()
{
    DisplayI();
    DisplayR();
    return 0;
}
