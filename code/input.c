#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    int roll_no;
    char group;
    float marks;
    printf("Enter your roll no:");
    scanf("%d",&roll_no);
    printf("\nYour roll no is:%d",roll_no);
    printf("\nEnter your marks in final exam of grade 12:");
    scanf("%f",&marks);
    printf("\nYour mark is:%f",marks);
    printf("\nEnter your group in class: ");
    scanf(" %c",&group);
    printf("\nYour group in class is:%c",group);
    printf("\nSize of integer is %d",sizeof(int));
    printf("\nSize of float is %d",sizeof(float));
    return 0;
}qq
