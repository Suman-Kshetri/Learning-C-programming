#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch,choice;
    FILE *fptr;
    fptr=fopen("character.txt","w+");
    if(fptr==NULL)
    {
    printf("No file found!!!");
    exit(0);
    }
    do
    {
    printf("Enter the character:");
    scanf(" %c",&ch);
    fputc(ch,fptr);
    printf("Enter y if you want to add more..\n Enter n if you want to end the program..");
    scanf(" %c",&choice);
    }while(choice=='y'|| choice=='Y');
    printf("The characters are:\n");
    while((ch=fgetc(fptr))!=EOF)
    {
    
    printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}