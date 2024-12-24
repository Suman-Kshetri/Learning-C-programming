#include<stdio.h>
#include<conio.h>

int main()
{
    int num;int rev=0, temp=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int original=num;
    while(num!=0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    printf("The reverse is %d\n",rev);

    if(original==rev)
    {
        printf("Pllindrome");
    }
    else {
        printf("Not pallindrome");
    }
 return 0;}
