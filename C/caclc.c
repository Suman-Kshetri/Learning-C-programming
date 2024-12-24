#include<stdio.h>

int main()
{
    int a,b;float result;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    result=(float)a/b;
    printf("The division is:%.2f",result);
    return 0;
}