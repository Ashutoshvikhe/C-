//
//  Programme163.c
//  
//
//  Created by Ashutosh Vikhe on 24/05/21.
//  Write a recursive program which accept number from user and return summation of its digits.
// Input : 879
// Output : 24

#include <stdio.h>
int Sum(int iNo)
{
    /*
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    return iSum;
   */
    
    static int iCnt=1;
    static int iSum=0;
    int iDigit=0;
    if(iCnt<=iNo)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        Sum(iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=Sum(iValue);
    printf("The Sum of the Digits is:%d\n",iRet);
    return 0;
}
