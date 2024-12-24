#include<stdio.h>

typedef struct feet_inch{
    int feet;
    float inch;
}ft;
int main()
{
    ft dis1,dis2,sum;
    printf("Enter the first distance in feet and inch:\n");
    scanf("%d%f",&dis1.feet,&dis1.inch);
    printf("Enter the second distance in feet and inch:\n");
    scanf("%d%f",&dis2.feet,&dis2.inch);
    sum.feet=dis1.feet+dis2.feet;
    sum.inch=dis1.inch+dis2.inch;
    if(sum.inch>=12.0)
    {
        sum.feet++;
        sum.inch=sum.inch-12.0;
    }
    printf("The sum of two distance is %d feet and %.2f inch",sum.feet,sum.inch);
    return 0;
}