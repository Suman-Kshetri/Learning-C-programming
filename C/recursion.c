#include<stdio.h>

int recursion(int x) //x=5
{
    if(x==0)
    {
        printf("%d",x);
        return 0;
        
    }recursion(x-1);// recursion(4)
}
int main()
{
    int a=5;
    recursion(a);
    return 0;
}