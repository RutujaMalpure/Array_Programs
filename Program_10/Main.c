/*
    Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int iArr[],int iSize,int iNum)
{
    int iCnt=0,iNumber=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iArr[iCnt]==iNum)
        {
            iNumber++;
        }
    }
    return iNumber;
   
}
int main()
{
    int iValue=0,iCnt=0,iNo=0;
    int *ptr=NULL;
    int iRet=0;
    printf("enter the size of array");
    scanf("%d",&iValue);

    printf("enter the value");
    scanf("%d",&iNo);


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
    iRet=Frequency(ptr,iValue,iNo);
    if(iRet==0)
    {
        printf("the number %d is not in the array",iNo);
    }
    else
    {
        printf("the frequencyof %d in the array is %d",iNo,iRet);
    }
   
    free(ptr);
    return 0;

}