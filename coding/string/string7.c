//WAP to input array of strings and also display the strings in alphabetic order
#include<stdio.h>
#include<string.h>

int main()
{
   char str[24][24],temp[24];
   int i,j,n;
   printf("Enter the number of string:");
   scanf("%d",&n);
   printf("Enter the string elements:\n");
   for(i=0;i<n;i++)
   {
    scanf("%s",str[i]);
   }
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
    }
   }
   printf("The string in ascending order is:\n");
   for(i=0;i<n;i++)
   printf("%s ",str[i]);
   return 0;
}