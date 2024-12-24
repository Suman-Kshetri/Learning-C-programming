/*WAP to define a structure employee with members empno, name, salary and
address. Main() should always ask input for the particular function call until user
exits the program. And create functions as below:
a. Input(): To read a record of employee.
b. Display(): To display the all the records.
c. Updatesal(): To update the particular salary of the employee.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 100
int data;

typedef struct employee
{
    int emp_no;
    char name[40];
    float salary;
    char address[50];
}emp;
int add_record(emp e[])
{
    system("cls");
    printf("Enter employee no: ");
    scanf("%d",&e[data].emp_no);
    printf("Enter name of employee: ");
    scanf(" %s",e[data].name);
    printf("Enter salary: ");
    scanf("%f",&e[data].salary);
    printf("Enter employee address: ");
    scanf(" %s",e[data].address);
    printf(" RECORD ADDED ");
    data++;

    getch();
}
int display_record(emp e[])
{
    int i;
    if(data==0)
    {
        printf("No record found");
        getch();
    }
    else{

    printf("The record are:\n");
    printf("EMP_NO\\t\t NAME\t\t SALARY \t\t ADDRESS\n");
    for(i=0;i<data;i++)
    {
    printf("%d \t\t %s \t\t %f \t\t %s\n",e[i].emp_no,e[i].name,e[i].salary,e[i].address);

    }
    getch();
    }
}

int update_record(emp e[])
{
    system("cls");
    int temp_no,i;
    printf("Enter the employee no:");
    scanf("%d",&temp_no);
    for(i=0;i<data;i++)
    {
    if(temp_no==e[i].emp_no)
    {
        e[i].salary=e[i].salary+e[i].salary*0.1;
        printf("%s salary incresed...",e[i].name);
    }
    else{
        printf("no data found on %d employee no",temp_no);
    }
    getch();
    }
}


int main()
{
    emp e[size];
    int choice;
    while(1)
    {
    system("cls");
    printf("1.ADD EMPLOYEE RECORD\n2.DISPLAY RECORD\n3.UPDATE RECORD\n4.EXIT");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        add_record(e);
        break;
        case 2:
        display_record(e);
        break;
        case 3:
        update_record(e);
        break;
        case 4:
        exit(0);
        default:
        printf("Invalid input!!");
    }
    }
    return 0;
}
