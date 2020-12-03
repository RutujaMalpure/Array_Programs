/*
    Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int AlphabetCapital(char Letter)
{
    if(Letter>='A' && Letter<='Z')
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
    iRet=AlphabetCapital(ch);
    if(iRet==TRUE)
    {
        printf("it is an  Cpital alphabet");
    }
    else
    {
        printf("It is not an  Capital alphabet");
    }
}
