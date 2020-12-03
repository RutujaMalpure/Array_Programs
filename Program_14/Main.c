/*
    Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int AlphabetSmall(char Letter)
{
    if(Letter>='a' && Letter<='z')
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
    iRet=AlphabetSmall(ch);
    if(iRet==TRUE)
    {
        printf("it is an Small alphabet");
    }
    else
    {
        printf("It is not an  Small alphabet");
    }
}
