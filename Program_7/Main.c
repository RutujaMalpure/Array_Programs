/*
    Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int FreqDifference(int iArr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0,iResult=0;
    if(iSize<=0)
    {
        return 0;
    }
    if(iArr==NULL)
    {
        return 0;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((iArr[iCnt]%2)==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    return iResult=iEven-iOdd;
}
int main()
{
    int iValue=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    printf("enter the size of array");
    scanf("%d",&iValue);

    ptr=(int*)malloc(sizeof(int)*iValue);

    if(ptr==NULL)
    {
        printf("error unable to allocate the memory");
        return-1;
    }

    printf("enter the elemens in array");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=FreqDifference(ptr,iValue);
    printf("the frequency difference is %d",iRet);

    free(ptr);
    return 0;

}