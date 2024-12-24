//4. WAP to display sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n!
#include<stdio.h>
int main() {
    int num, i, fact,sum=0,j;
    printf("Input any number: ");
    scanf("%d", &num);
    printf("1 ");
    for(i = 2; i <= num; i++)
        printf(" + 1/%d! ", i);

    for(i = 1; i <= num; i++)
        {
            fact=1;
            for(j=1;j<i;j++)
            {
                fact=fact*i;
            }
            sum=sum+fact;

        }
        printf("SUM= 1/%d",sum);

    return 0;
}