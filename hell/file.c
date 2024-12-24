#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct employee
{
    int empno;
    char name[30];
    float salary;
}emp;
void add_record()
{
    emp e;
    FILE *myfile;
    printf("Enter empno,name,salary\n");
    scanf("%d%s%f",&e.empno,e.name,&e.salary);
    myfile = fopen("myfile.bin","ab");
    fwrite(&e,sizeof(emp),1,myfile);
    fclose(myfile);
    printf("");
}
void display_record()
{
    emp e;
    FILE *myfile; 
    myfile = fopen("myfile.bin","rb");
    printf("The records are:\n");
    while(fread(&e,sizeof(emp),1,myfile)==1)
    {
        printf("%d %s %f\n",e.empno,e.name,e.salary);
    }
    fclose(myfile);
}
void update_record()
{
    emp e;
    int tempno;
    float tempsal;
    FILE *myfile; 
    myfile = fopen("myfile.bin","r+b");
    printf("Enter the empno:");
    scanf("%d",&tempno);
    while(fread(&e,sizeof(emp),1,myfile)==1)
    {
        if(e.empno == tempno)
        {
            printf("Enter new salary");
            scanf("%f",&tempsal);
            e.salary = tempsal;
            fseek(myfile,-sizeof(emp),SEEK_CUR);
            fwrite(&e,sizeof(emp),1,myfile);
            printf("%s salary is increased\n",e.name);
            break;
        }   
    }
    fclose(myfile); 
}
void delete_record()
{
    emp e;
    int tempno;
    FILE *myfile,*temp; 
    myfile = fopen("myfile.bin","rb");
    temp = fopen("temp.bin","wb");
    printf("Enter the empno:");
    scanf("%d",&tempno);
    while(fread(&e,sizeof(emp),1,myfile)==1)
    {
        if(e.empno != tempno)
            fwrite(&e,sizeof(emp),1,temp);
        else
            printf("%s record is deleted\n",e.name);
    }
    fclose(myfile);
    fclose(temp);
    myfile = fopen("myfile.bin","wb");
    temp = fopen("temp.bin","rb");
    while(fread(&e,sizeof(emp),1,temp)==1)
    {
        fwrite(&e,sizeof(emp),1,myfile);
    }
    fclose(myfile);
    fclose(temp);
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("Employee Management System\n1.Add Record\n2.Display Record\n3.Update Record\n4. Delete Record\n5.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add_record();
            break;
        case 2: display_record();
            break;
        case 3: update_record();
            break;
        case 4: delete_record();
            break;
        case 5: exit(0);
        default: printf("Invalid Input\n");
        }
        getch();
    }
    return 0;
}