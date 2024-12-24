//WAP to illustrate the use of string functions (strlen, strcpy, strcat, strcmp, strrev).

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],str3[100];
    int length;
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str3);
    length=strlen(str1);
    printf("The length of the string is:%d",length);
    strcpy(str2,str1);
    printf("\nThe copied from 1^st to 2^nd string is:%s",str2);
    strcat(str1," ");
    strcat(str1,str3);
    printf("\nThe concatenated sting(1^st and 3^rd) is:%s",str1);
   if(strcmp(str2,str3)==0)
        printf("\nThe strings are same");
        else
                        printf("\nThe 2^nd and 3^rd strings  are not same");
    strrev(str3);
    printf("\nThe reversed od 3^rd string is:%s",str3);
    return 0;

}