//WAP to concatenate two string using user define function
#include<stdio.h>
#include<string.h>

char concatinate(char str1[],char str2[])
{
    int len1=0,len2=0,i;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    len2++;
    
    for(i=0;i<len2;i++)
    str1[len1+i]=str2[i];

    str1[len1+i]='\0';
}

int main()
{
    char str1[100],str2[100];
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    concatinate(str1," ");
    concatinate(str1,str2);
    printf("The concatinated string is: %s",&str1);
    return 0;   
}