//WAP to compare two string without using string function.

#include<stdio.h>

int main()
{
    char str1[40],str2[40];
    int len1=0,len2=0,i,count=0;
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter the second strinf:");
    scanf("%s",str2);
    while(str1[len1]!='\0')
    len1++;
    while(str2[len2]!='\0')
    len2++;
    if(len1!=len2)
    {
        printf("The strings are different.\n");
        return 0;
    }
    else{
    for(i=0;i<len1;i++)
    {
        if(str2[i]!=str1[i])
        {
            count++;
            break;
        } 
    }

    if(count==0)
    printf("Both the string are same");
    else
    printf("The string are different");
    }
    return 0;
}