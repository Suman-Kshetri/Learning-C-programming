#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i;
    int count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num==1)
    {
        printf("Invalid");
    }
    else{
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count ++;
        }
    }

    if(count)
    {
        printf("%d \t is not a Prime Number", num);
    }

    else
    {
        printf("%d is a prime number",num);
    }
    }
}
