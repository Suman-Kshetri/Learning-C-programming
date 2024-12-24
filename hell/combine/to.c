#include<stdio.h>
#include "bubble.h"

#define MAX_SIZE 100

int main()
{
    int num[MAX_SIZE],a;
    printf("Enter the number of elements you want to input:");
    scanf("%d",&a);
    printf("Enter the elements:\n");
    input_array(num,a);
    printf("The elements of array are:\n");
    print_array(num,a);
    bubble_sort(num,a);
    printf("\nThe elements in ascending order are:\n");
    print_array(num,a);
    return 0;

}