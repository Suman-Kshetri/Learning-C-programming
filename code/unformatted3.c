#include<stdio.h>
int main()
{

    int a=15,c=35;
    float b=20.43;
    int i,j;
    printf("A=");
    for(i=1;i<=5;i++)
    {
        printf("%7d|%-7d|",a,a);
    }
    printf("\nB=");
    for(i=1;i<=5;i++)
    {
        printf("%7.2f|%-7.2f|",b,b);
    }
    printf("\nC=");
      for(i=1;i<=5;i++)
    {
        printf("%7d|%-7d|",c,c);
    }

    return 0;
}
