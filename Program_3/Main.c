/*
    Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80
*/
#include<stdio.h>
#include<stdlib.h>
void  Display(int iArr[],int iSize)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(((iArr[iCnt]%5)==0) && ((iArr[iCnt])%2==0))
        {
            printf("%d\t",iArr[iCnt]);
        }
        
    }
   
}
int main()
{
    int iValue=0,iCnt=0;
    int *ptr=NULL;
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
    Display(ptr,iValue);
   
    free(ptr);
    return 0;

}