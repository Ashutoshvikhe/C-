//
//  Programme162.c
//  
//
//  Created by Ashutosh Vikhe on 19/05/21.
//  Accept the number from user and display in its reverse Order

#include <stdio.h>
void ReverseOrder(unsigned int iValue)
{
    /*
     int iCnt=0;
     while(iValue > 0)
     {
         printf("%d\t",iValue);
         iValue--;
     }
     int iCnt=0;
     for(iCnt=iValue;iCnt>=1;iCnt--)
     {
         printf("%d\n",iCnt);
     }
     */
    
    if(iValue > 0)
    {
        printf("%d\t",iValue);
        iValue--;
        ReverseOrder(iValue);
    }

}
int main()
{
    unsigned int iNo =0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    ReverseOrder(iNo);
    return 0;
}
