/*
    Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int iArr[],int iSize)
{
    int iCnt=0,iNumber=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iArr[iCnt]==11)
        {
            iNumber++;
        }
    }
    return iNumber;
   
}
int main()
{
    int iValue=0,iCnt=0;
    int *ptr=NULL;
    int iRet=0;
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
    iRet=Frequency(ptr,iValue);
    if(iRet==0)
    {
        printf("the number 11 is not in the array");
    }
    else
    {
        printf("the frequencyof 11 in the array is %d",iRet);
    }
   
    free(ptr);
    return 0;

}