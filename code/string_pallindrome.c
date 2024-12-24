#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[30],b[30];int length;int i;
    printf("Enter the given string:\n");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("pallindrome");
    }
    else {
        printf("Not pallindrome");
    }

    return 0;
}
