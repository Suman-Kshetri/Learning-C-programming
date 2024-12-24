// WAP to input the name, rool no and address of 10 student using structre and display it using structure


#include<stdio.h>

struct{
    char name[30], address[50];
    int roll_no;
}student[10];

int main()
{
    int i;
    
    printf("Enter details of students:\n");
    printf("Enter the name:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&student[i].name);
    }
    printf("\nEnter the Roll No:\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&student[i].roll_no);
    }
    printf("\nEnter the Address:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&student[i].address);
    }
    printf("\nThe Details of the students are as follows:\n");
    printf("=====================================\n");
    printf("||NAME\tROLL-NO\tADDRESS\n||");
    return 0;
}