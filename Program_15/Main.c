/*
    Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/
#include<stdio.h>

int DisplayTime(char Letter)
{
    if(Letter=='A' || Letter=='a')
    {
        return 7;
    }
    else if(Letter=='B' || Letter=='b')
    {
        return 8.30;
    }
    else if(Letter=='C' || Letter=='c')
    {
        return 9.20;
    }
    else if(Letter=='D' || Letter<='d')
    {
        return 10.30;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char ch='\0';
    int iRet=0;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=DisplayTime(ch);
    printf("your EXam is at %d AM",iRet);
    
}
