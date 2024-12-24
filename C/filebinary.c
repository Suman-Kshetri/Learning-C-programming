#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("Student.bin","wb");
    char c[200]="HELLO I AM PROGRAMMER";
    fwrite(&c,sizeof(c),1,fptr); //writing 18 characters from the address of 'c' to file
    fclose(fptr);
    fptr=fopen("Student.bin","rb");
    if(fptr==NULL)
    {
        printf("Cannot open the file");
        exit(0);
    }
    char s[100];
    fread(&s, sizeof(s),1,fptr);
    printf("%s",s);
    fclose(fptr);
    return 0;
}