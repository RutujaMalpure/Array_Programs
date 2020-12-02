/*
    Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int iArr[],int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iArr[iCnt]==11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
    }
   
}
int main()
{
    int iValue=0,iCnt=0;
    int *ptr=NULL;
    BOOL iRet=FALSE;
    printf("enter the size of array");
    scanf("%d",&iValue);

    ptr=(int*)malloc(sizeof(int)*iValue);

    if(ptr==NULL)
    {
        printf("error unable to allocate the memory");
        return -1;
    }

    printf("enter the elemens in array");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Check(ptr,iValue);
    if(iRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
   
    free(ptr);
    return 0;

}