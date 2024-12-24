/*Write a C program to find sum of, first 10 natural
numbers using recurs*/

#include<stdio.h>

int sumoften(int num);

int main()
{
    int n=10;
    int sum=0;
    sum=sumoften(n);
    printf("The sum of first ten natural number is:%d",sum);
    return 0;
}
int sumoften(int num)
{
    if(num==1)
    return 1;
    else
    return num+sumoften(num-1);
}