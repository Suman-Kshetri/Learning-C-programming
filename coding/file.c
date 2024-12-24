/*WAP to define a structure employee with members empno, name, salary and 
address. Main() should always ask input for the particular function call until user 
exits the program. Create binary file employee.dat and functions as below:
a. AddRecord(): To add record of employee in the file.
b. DisplayRecord(): To display all the records from the file.
c. UpdateRecord(): To update the particular salary of the employee in the file.
d. DeleteRecord(): To delete the particular record of employee from the file*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 100
int data;
FILE *fptr;

typedef struct employee
{
    int emp_no;
    char name[40];
    float salary;
    char address[60];
}emp;
int add_record(emp e[])
{
    system("cls");
    
    printf("Enter employee no:");
    scanf("%d",&e[data].emp_no);
    printf("Enter employee name:");
    scanf(" %s",e[data].name);
    printf("Enter salary of employee:");
    scanf("%f",&e[data].salary);
    printf("Enter address of employee:");
    scanf(" %s",e[data].address);
    fptr=fopen("employee.dat","ab");
    fwrite(&e[data],sizeof(emp),1,fptr);
    
    printf("Record Added!!!");
    fclose(fptr);
    data++;
    getch();
}
int display_record(emp e[])
{
    int i=0;
    if(data==0)
    {
        printf("NO RECORD FOUND!!");
    }
    else{
    printf("The Record of The Employee are:\n");
    printf("EMP_NO\tNAME\tSALARY\tADDRESS\n");
    fptr=fopen("employee.dat","rb");
    while(( fread(&e[i],sizeof(emp),1,fptr))==1)
    {
            printf("%d %s %.2f %s \n",e[i].emp_no,e[i].name,e[i].salary,e[i].address);
            i++;
    }
    
    }
    fclose(fptr);
    getch();
    
}
int update_record(emp e[])
{
    system("cls");
    int temp_no,temp_salary;
    int i;
    printf("Enter the employee number whose salary you wannt to increase:");
    scanf("%d",&temp_no);
    printf("Enter the percentage of salary to be increased:");
    scanf("%d",&temp_salary);
    fptr=fopen("employee.dat","ab");

    for(i=0;i<data;i++)
    {
        fread(&e[i],sizeof(emp),1,fptr);
        if(e[i].emp_no==temp_no)
        {
            e[i].salary+=e[i].salary*temp_salary;
            printf("%s salary increased ",e[i].name);
            fseek(fptr,-sizeof(emp),SEEK_CUR);
            fwrite(&e[i],sizeof(emp),1,fptr);
            fclose(fptr);
            getch();
        }
        else{
            printf("NO record found to delete:");
            getch();
        }
    }

}
int delete_record(emp e[])
{
    FILE *temp;
    int temp_no,i;
    fptr=fopen("employee.dat","rb");
    temp=fopen("temp.dat","wb");
     printf("Enter the employee number you want to delete:");
    scanf("%d",&temp_no);
    for(i=0;i<data;i++)
    {
        fread(&e[i],sizeof(emp),1,fptr);
        if(e[i].emp_no!=temp_no)
        {
        fwrite(&e[i],sizeof(emp),1,temp);
        }
    } 
    getch();
    fclose(temp);
    fclose(fptr);
    
    fptr=fopen("employee.dat","wb");
    temp=fopen("temp.dat","rb");
    for(i=0;i<data;i++)
    {
        fread(&e[i],sizeof(emp),1,temp);
        fwrite(&e[i],sizeof(emp),1,fptr);
    }
    fclose(fptr);
    fclose(temp);
}

int main()
{
    emp e[size];
    
    int choice;
    while(1)
    {
        system("cls");
        printf(" 1.ADD RECORD\n 2.DISPLAY RECORD\n 3.UPDATE RECORD\n 4.DELETE RECORD\n 5.EXIT\n");
        printf("Enter your choice:");
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
            delete_record(e);
            break;
            case 5:
            exit(0);

            default:
            printf("Invalid Input!!");
        }
    }
    return 0;
}