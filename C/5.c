
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("The number before swap: a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The number after swap is: a=%d and b=%d",a,b);
     return 0;
}
