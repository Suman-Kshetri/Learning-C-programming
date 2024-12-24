/*types of file inc
1. text file(ASCII characters)
2. binary file(Binary digits)
FILE POINETER IN C
a file pointer is a reference to a particular position in the opened file. it is used in file handling
to perform  operation such as read write ,close etc

FILE OPERATION
 fopen() : opens the file and returns a FILE pointer if successful, otherwise NULL
 fread(): reads data from stream pointed by ptr, until the end of the file or buffer is filled. It returns the number of items successfully written
 fscanf() or fgets()-reading from file 
 fprintf() or fputs()-writing a file
 fseek() or rewind()-Moving to a specific position
 fclose()- to close a file.
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE*fptr; //file pointer
fptr = fopen("Student.txt","w"); //opens the file in write mode
if(fptr==NULL)
{
    printf("Cannot find the file:");
    exit(0);
}
fprintf(fptr,"Hello world");
fclose(fptr);
fptr= fopen("Student.txt", "r");
if(fptr == NULL)
{
   printf("Could not open the file.");
   exit(0);
}
char ch;
while(ch != EOF)//EOF stands for end of file|| while(!feof(fptr))
{
    ch = fgetc(fptr);
    printf(" %c",ch);
    }
    /* char c[200];
    fgets(c,sizeof(c),fptr);
    printf("%s\n",c);
    fclose(fptr);
    */
fclose(fptr);
return 0;
}


