#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *F;
    F=fopen("file1.txt","w");
    if(F==NULL)
    {
        printf("Cannot find the file");
        exit(0);
    }
    fprintf(F,"Hello tf");

char C[200];
fgets(C,sizeof(C),F);
printf("%s",C);
fclose(F);
return 0;
}