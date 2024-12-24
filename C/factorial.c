#include<stdio.h>

int fact(int num);

int main()
{
    int num, output;
    printf("Enter the factorial number:");
    scanf("%d",&num);
    output=fact(num);
    printf("The fatorial is:%d",output);
    return 0;
}
int fact(int n)
{
    if( n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}