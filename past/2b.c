#include<stdio.h>

#define pi 3.1415

int main()
{
    int d;
    float area;
    printf("Enter the radius of circle:");
    scanf("%d",&d);
    area=pi*d*d;
    printf("The area of cirle is: %.2f",area);
    return 0;
}
