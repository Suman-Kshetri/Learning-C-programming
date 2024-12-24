#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *string;
    char str[30];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    string=fopen("string.txt","w+");
    if(string==NULL){
        printf("no data found:!!!");
        exit(0);
    }
    rewind(string);
    fputs(str,string);
    printf("The string is:\n");
    fgets(str,sizeof(str),string);
    printf("%s",str);
    fclose(string);
    return 0;
}