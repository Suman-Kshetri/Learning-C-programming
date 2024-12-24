//WAP to illustrate the use of fscanf() and fprintf()

#include<stdio.h>

int main()
{
    int phone_no;
    char name[20];
    FILE *fptr;
    fptr=fopen("detail.txt","w+");
    printf("Enter name and phone number:");
    scanf("%s%d",name,&phone_no);
    fprintf(fptr,"%s %d",name,phone_no);
    rewind(fptr);
    printf("NAME\tPHONE_NO\n");
    while((fscanf(fptr,"%s %d",name,&phone_no))!=EOF)
    {

    printf("%s\t%d",name,phone_no);
    }
    fclose(fptr);
    return 0;

}
