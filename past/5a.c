/*Write a program to read marks of 48 students in a class and display the second highest
mark*/
#include<stdio.h>
#define num 48
int main()
{
    int marks[num],i;
    int temp_marks=0,j;
    printf("Enter the marks of students:\n");
    for(i=0;i<num;i++)
    {
        printf("%d.  ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<(num);j++)
        {
            if(marks[i]<marks[j])
            {
                temp_marks=marks[i];
                marks[i]=marks[j];
                marks[j]=temp_marks;
            }
        }
        printf("%d  ",marks[i]);
    }
    printf("\nThe second highest marks is:%d",marks[1]);
    return 0;
}