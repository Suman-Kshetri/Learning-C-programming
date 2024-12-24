/*WAP to display the first n terms of Fibonacci series*/
#include<stdio.h>

int fibonaccii(int num)
{
    if(num==0)
    return 0;
    else if(num==1)
    return 1;
    else
    return fibonaccii(num-1)+fibonaccii(num-2);
}
int main()
{
    int num,fib,i;
    printf("Enter the number of fibonacci series you want to print: ");
    scanf("%d",&num);
    printf("The fibonacci series are:\n");
    for(i=0;i<=num;i++)
    {
        fib=fibonaccii(i);
        printf("%d\t",fib);
    }
    return 0;
    
}