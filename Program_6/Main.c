/*Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3

*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int iArr[],int iSize)
{
    int iCnt=0,iEven=0;
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
        
    }
    return iEven;
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
    iRet=Frequency(ptr,iValue);
    printf("the even numbers are  %d",iRet);

    free(ptr);
    return 0;

}