#include<stdio.h>
#include<conio.h>

int main()
{
    int i, salary[5], count=0;
    printf("Enter the salary of the employee:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&salary[i]);
        if(salary[i]>20000&& salary[i]<30000)
        {
            count ++;
        }
    }
    printf("%d of the employees is getting salary between 20000 to 30000",count);
    return 0;
}
