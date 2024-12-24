// WAP to input the name, rool no and address of 2 student using structre and display it using structure


#include<stdio.h>

struct{
    char name[30], address[20];
    int roll_no;
}student[2];

int main()
{
    int i;
    printf("Enter details of students:\n");
    printf("Enter the name:\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",&student[i].name);
    }
    printf("\nEnter the Roll No:\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&student[i].roll_no);
    }
    printf("\nEnter the Address:\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",&student[i].address);
    }
    printf("\nThe Details of the students are as follows:\n");
    printf("==================================================\n");
    printf("\tNAME\t\tROLL-NO\t\tADDRESS\t\n");
    printf("==================================================\n");
    for(i=0;i<2;i++)
    {
        printf("\t%s\t\t%d\t\t%s\t",student[i].name,student[i].roll_no,student[i].address);
        printf("\n");
        printf("==================================================\n");
    }
    return 0;
}