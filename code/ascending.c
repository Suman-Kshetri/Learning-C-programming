#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n;
    int temp=0;
    printf("How many number you want to sort:");
    scanf("%d",&n);
    printf("Enter the number:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The ascending order is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
