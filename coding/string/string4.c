//WAP to copy the string without using string function.

#include<stdio.h>

int main()
{
    char str1[30],str2[30];
    int len=0,i;
    printf("Enter the string:");
    scanf("%s",str1);
    while(str1[len]!='\0')
    len++;
    for(i=0;i<len;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("The copied string is:%s",str2);

    return 0;
}