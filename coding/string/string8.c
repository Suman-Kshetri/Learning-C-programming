//WAP to check whether the string is palindrome or not
#include<stdio.h>

int main()
{
    char str[30];
    int len=0,end,begin,count=0;
    printf("Enter the string:");
    scanf("%s",str);
    while(str[len]!='\0')
    len++;

    end=len-1;
    for(begin=0;begin<(len/2);begin++)
    {
        if(str[begin]!=str[end])
        {
            count++;
        }
        end--;
    }
    if(count==0)
    {
        printf("The string is pallindrome:");
    }
    else{
        printf("The string is not pallindrome:");
    }
    return 0;


}