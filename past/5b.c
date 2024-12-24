/*how can we copy one string to another string without using any string handling
functio*/
#include<stdio.h>

int main()
{
    char string1[30],string2[30];
    int length=0,i;
    printf("Enter the first string:");
    scanf("%s",string1);
    while(string1[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        string2[i]=string1[i];
    }
    string2[length]='\0';
    printf("The string1 is:%s",string1);
    printf("\nThe string2 is:%s",string2);
    return 0;
}