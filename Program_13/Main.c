/*
    Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int CheckDigit(char Letter)
{
    
    if(Letter>='0' && Letter<='9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char ch='\0';
    BOOL iRet=FALSE;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=CheckDigit(ch);
   if(iRet==TRUE)
    {
        printf("it is an  Digit");
    }
    else
    {
        printf("It is not an Digit");
    }
}
