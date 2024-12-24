//WAP to find the all the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c, disc,real,imaginary,root1,root2,root;
    printf("Enter the value of a,b,c from Quadratic equation ax^2+bx+c=0:\t");
    scanf("%f%f%f",&a,&b,&c);
    disc=pow(b,2)-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("The two unique roots of Qudratic equation are:\n%.2f and %.2f",root1,root2);
    }
    else if(disc==0)
    {
        root=(-b)/(2*a);
        printf("The root of the Quadratic equation is:\n %.2f",root);
    }
    else if(disc<0)
    {
        real=(-b)/(2*a);
        imaginary=sqrt(-disc)/(2*a);
        printf("The two complex root of Quadratic equation are: %.2f+i%.2f and %.2f-i%.2f",real,imaginary,real,imaginary);
    }
    return 0;
}
