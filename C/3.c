//normal calculator

#include<stdio.h>

int main()
{
    int n1,n2;
    float output;
    char ch;
    printf("Enter the two number:");
    scanf("%d%d",&n1,&n2);
    printf("Enter '+' for addition, '-' for substraction, 'x'for multipication and '/' for division:");
    scanf(" %c",&ch);
    if(ch=='+')
    {
        output=n1+n2;
        printf("The sum is:%f",output);
    }
    else if(ch=='-')
    {
        output=n1-n2;
        printf("The substraction is:%f",output);
    }
    else if(ch=='x')
    {
        output=n1*n2;
        printf("The product is:%f",output);
    }
    else if(ch=='/')
    {
        output=n1/n2;
        printf("The division is:%f",output);
    }
    else{
        printf("INVALID CHARACTER!!!!");
    }
    return 0;
}
