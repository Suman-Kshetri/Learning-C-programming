#include<stdio.h>

int main()
{
    int arr[10],i,sum=0;
    printf("Enter the elements of array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
        
    }printf("\n The sum of array is:%d",sum);
    return 0;
}