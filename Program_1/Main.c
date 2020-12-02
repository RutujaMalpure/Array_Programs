/*
    Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int iArr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;
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
            iEven=iEven+iArr[iCnt];
        }
        else
        {
            iOdd=iOdd+iArr[iCnt];
        }
    }
    return iEven-iOdd;
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
    iRet=Difference(ptr,iValue);
    printf("the difference is %d",iRet);

    free(ptr);
    return 0;

}