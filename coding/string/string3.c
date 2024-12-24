//WAP to count the length of string without using string function.

#include<stdio.h>

int main()
{
    char string[30];
    int i,length=0;
    printf("Enter the string:");
    scanf("%[^\n]s",string);//fgets(string,sizeof(string),stdin);
    while(string[length]!='\0')
    {
        length++;
    }
    printf("The length of the string is %d",length);

    return 0;
}