/*? Write a program to oreate a stfucture named
"Student" having members Roll" Name, Address and marks. use this structure to read the
information of 48 students in a class and display the information of, only those students
whose marks is between 50 and 70*/

#include<stdio.h>
#define max 1

struct Student{
    int roll_no;
    char name[50],address[50];
    float marks;
};

int main()
{
    struct Student s[max];
    int i,found=0;
    for(i=0;i<max;i++)
    {
        printf("Ente the information of %d student:\n",i+1);
        printf("\t Roll No:");
        scanf("%d",&s[i].roll_no);
        printf("\t Name:");
        scanf(" %s",s[i].name);
        printf("\t Address:");
        scanf(" %s",s[i].address);
        printf("\t marks:");
        scanf("%f",&s[i].marks);
    }
    printf("The Information of student whose marks is between 50 and 70 are:\n");
    for(i=0;i<max;i++)
    {
        if(s[i].marks > 50 && s[i].marks < 70)
        {
            printf("\t Roll No:");
            printf("%d",s[i].roll_no);
            printf("\n\t Name:");
            printf("%s",s[i].name);
            printf("\n\t Address:");
            printf("%s",s[i].address);
            printf("\n\t marks:");
            printf("%.2f\n",s[i].marks);
            found++;
        }
    }
    if(found==0){
        printf("No students found!");
    }
    return 0;
}
