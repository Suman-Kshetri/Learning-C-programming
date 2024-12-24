#include<stdio.h>
#include<conio.h>

int main()
{
    int i, num[100],n,maximum,minimum;
    printf("How many numbers:\t");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    int min=num[0];
    for(i=0;i<n;i++)
    {
        if(num[i]>max)
        {
             maximum=num[i];
        }
        else if(num[i]<min)
        {
            minimum=num[i];
        }
    }
    printf("The greatest number is:%d", maximum);
    printf("\nThe smallest number is:%d",minimum);

}

